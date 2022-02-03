/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_multifd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:00:51 by mrantil           #+#    #+#             */
/*   Updated: 2022/02/02 11:48:52 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*line = NULL;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	(void)argc;
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	fd3 = open(argv[3], O_RDONLY);
	i = get_next_line(fd1, &line);
	if (i)
		printf("%s\n", line);
	i = get_next_line(fd2, &line);
	if (i)
		printf("%s\n", line);
	i = get_next_line(fd3, &line);
	if (i)
		printf("%s\n", line);
	i = get_next_line(fd1, &line);
	if (i)
		printf("%s\n", line);
	else
		printf("error ;*(");
//	ft_putchar('\n');
//	ft_strdel(&line);
//	system("leaks test_gnl");
	return (0);
}
