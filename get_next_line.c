#include "get_next_line.h"
#include <stdio.h>	//

static int	resolve_buf(char **b, char **s)
{
	char			*str1;
	char			*str2;
	unsigned int	start;
	size_t			len;

	/* what if buf contains two '\n' back-to-back ???? */
	
	/* if first '\n' not found */
	if (!(str1 = ft_strchr(*b, '\n')))
		/* go to read */
		return (1);
	/* find second '\n' */
	start = str1 - *b + 1;
//	printf("~start=%u~", start);	//
	str2 = ft_strchr(str1 + 1, '\n');
	/* if second '\n' not found */
	if (!(str2))
	{
		/* save the tail, go to read  */
		len = BUFF_SIZE - start;
//		printf("~len=%zu~", len);	//
		*s = ft_strsub(*b, start, len); // gotta free *s
		/* zero the buf */
		ft_bzero(*b, BUFF_SIZE);
		return (1);
	}
	else
	{
		/* save the chars found between two '\n' */
		len = str2 - str1 -1;
//		printf("~len=%zu~", len);	//
		*s = ft_strsub(*b, start, len);	// gotta free *s
		/* cut buf */
		*b = ft_strncpy(*b, (str1 + 1), BUFF_SIZE);
		/* skip reading */
		return (0);
	}
}

static int	findnl(char *buf, int ret, int *flag)
{
	int	i;

	i = 0;
	while (i < ret)
	{
		if (buf[i] == '\n')
		{
			ret = i;
			*flag = 1;
		}
		i++;
	}
	return (ret);
}

int			get_next_line(const int fd, char **line)
{
	int				ret;
	static char		buf[BUFF_SIZE]; // do BUFF_SIZE+1 and then use strlen for strsub size?
	char			*s;
	char			*b;
	int				flag;
	
	if (!line || fd < 0 || !fd)
		return (-1);
	b = &buf[0];
	s = NULL;
	if(!(resolve_buf(&b, &s)))
	{
		*line = s;
		return (1);
	}
	flag = 0;
	/* read */
	while (!flag && (ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		/* zero the old bytess if EOF */
		if (ret < BUFF_SIZE)
			ft_bzero(&buf[ret], BUFF_SIZE - ret);
		ret = findnl(buf, ret, &flag);
		b = ft_strnew(ret);	// gotta free b
		b = ft_strncpy(b, buf, ret);
		s = ft_strjoin(s, b);
		free(b);
	}
	*line = s;
	if (s && *s)
		return (1);
	return (0);
}
