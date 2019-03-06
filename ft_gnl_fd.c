/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:12:56 by dfonarev          #+#    #+#             */
/*   Updated: 2019/03/02 05:56:58 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	resolve_buf(char *buf, char **line)
{
	char			*str1;
	char			*str2;
	unsigned int	start;
	size_t			len;

	/* if first '\n' not found */
	if (!(str1 = ft_strchr(buf, '\n')))
		/* go to read */
		return (1);
	/* find second '\n' */
	start = str1 - buf + 1;
	str2 = ft_strchr(str1 + 1, '\n');
	/* if second '\n' not found */
	if (!(str2))
	{
		/* check if buf == '\0' skip all */
		if (!*(str1 + 1))
			return (1);
		/* save the tail, go to read  */
		len = ft_strlen(buf) - start;
		*line = ft_strsub(buf, start, len);
		/* clear the buf */
		ft_bzero(buf, GNL_BUF_SIZE);
		return (1);
	}
	else
	{
		/* save the chars found between two '\n' */
		len = str2 - str1 - 1;
		*line = ft_strsub(buf, start, len);
		/* cut buf */
		buf = ft_strncpy(buf, (str1 + 1), GNL_BUF_SIZE);
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

int			ft_gnl_fd(const int fd, char **line)
{
	int				ret;
	static char		buf[MAX_FD][GNL_BUF_SIZE + 1];
	int				flag;

	if (!line || fd < 0 || fd >= MAX_FD || read(fd, buf[fd], 0) < 0)
		return (-1);
	*line = NULL;
	if (!(resolve_buf(&buf[fd][0], line)))
		return (1);
	flag = 0;
	while (!flag && (ret = read(fd, buf[fd], GNL_BUF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		/* zero the old bytes if EOF */
		if (ret < GNL_BUF_SIZE)
			ft_bzero(&buf[fd][ret], GNL_BUF_SIZE + 1 - ret);
		/* if found '\n' in buf, set ret and flag */
		ret = strchr_flag(buf[fd], ret, &flag);
		savestr(buf[fd], ret, line);
	}
	if (*line && (**line || flag))
		return (1);
	return (0);
}
