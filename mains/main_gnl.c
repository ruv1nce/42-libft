/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:12:36 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/27 20:25:13 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		resume;
	
	resume = 1;
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (resume > 0)
		{
			if((resume = get_next_line(fd, &line)))
			{
				printf("%s", line);
				free(line);
			}
		}
		close(fd);
	}
}
