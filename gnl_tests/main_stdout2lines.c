/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stdout2lines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:00:51 by mrantil           #+#    #+#             */
/*   Updated: 2022/02/03 14:02:00 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main()//int argc, char **argv)
{
	char	*line = NULL;
	int		fd;
	int		i;

	fd = 0;
	i = get_next_line(fd, &line);
	printf("\n%s	\nfd: %d	ret: %d\n", line, fd, i);
	i = get_next_line(fd, &line);
	printf("\n%s	\nfd: %d	ret: %d\n", line, fd, i);
	i = get_next_line(fd, &line);
	printf("\n\n%s	\nfd: %d	ret: %d\n\n", line, fd, i);
//	ft_strdel(&line);
//	system("leaks test_gnl");
	return (0);
}
