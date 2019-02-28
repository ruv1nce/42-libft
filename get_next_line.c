/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:12:56 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/28 01:15:32 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>	//

static int	resolve_buf(char **b, char **line)
{
	char			*str1;
	char			*str2;
	unsigned int	start;
	size_t			len;

	/* if first '\n' not found */
	if (!(str1 = ft_strchr(*b, '\n')))
		/* go to read */
		return (1);
	/* find second '\n' */
	start = str1 - *b + 1;
	str2 = ft_strchr(str1 + 1, '\n');
	/* if second '\n' not found */
	if (!(str2))
	{
		/* check if buf == '\0' skip all */
		if (!*(str1 + 1))
			return (1);
		/* save the tail, go to read  */
		len = ft_strlen(*b) - start;
		*line = ft_strsub(*b, start, len);
		/* clear the buf */
		ft_bzero(*b, BUFF_SIZE);
		return (1);
	}
	else
	{
		/* save the chars found between two '\n' */
		len = str2 - str1 -1;
		*line = ft_strsub(*b, start, len);
		/* cut buf */
		*b = ft_strncpy(*b, (str1 + 1), BUFF_SIZE);
		/* skip reading */
		return (0);
	}
}

static int	strchr_flag(char *buf, int ret, int *flag)
{
	int	i;

	i = 0;
	while (i < ret)
	{
		if (buf[i] == '\n')
		{
			*flag = 1;
			return (i);
		}
		i++;
	}
	return (ret);
}

static void	savestr(char *src, int size, char **line)
{
	char	*b;
	char	*tmp;

	b = ft_strnew(size);
	b = ft_strncpy(b, src, size);
	tmp = *line;
	*line = ft_strjoin(*line, b);
	free(tmp);
	free(b);
}

int			get_next_line(const int fd, char **line)
{
	int				ret;
	static char		buf[BUFF_SIZE + 1];
	char			*b;
	int				flag;
	
	if (!line || fd < 0)
		return (-1);
	b = &buf[0];
	*line = NULL;
	if (!(resolve_buf(&b, line)))
		return (1);
	flag = 0;
	/* read */
	while (!flag && (ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		/* zero the old bytes if EOF */
		if (ret < BUFF_SIZE)
			ft_bzero(&buf[ret], BUFF_SIZE - ret);
		/* if found '\n' in buf, set ret and flag */
		ret = strchr_flag(buf, ret, &flag);
		savestr(buf, ret, line);
	}
	if (*line && **line)
		return (1);
	return (0);
}
