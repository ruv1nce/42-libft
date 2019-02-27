#include "get_next_line.h"

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
	unsigned int	ret;
	static char		buf[BUFF_SIZE];
	char			*s;
	char			*b;
	int				flag;
	
	if (!line || fd == -1)
		return (-1);
	b = &buf[0];
	s = NULL;
	if (buf[0])
		s = ft_strjoin(s, &buf[findnl(b, BUFF_SIZE, &flag) + 1]);
	flag = 0;
	while (!flag && (ret = read(fd, buf, BUFF_SIZE)))
	{
		ret = findnl(buf, ret, &flag);
		b = ft_strnew(ret);
		b = ft_strncpy(b, buf, ret);
		s = ft_strjoin(s, b);
	}
	*line = s;
	if (flag)
		return (1);
	return (0);
}
