/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stdout1lines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:00:51 by mrantil           #+#    #+#             */
/*   Updated: 2022/02/03 14:41:54 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main()
{
	char	*line = NULL;
	int		fd;
	int		i;

	fd = 0;
	i = get_next_line(fd, &line);
	printf("\n%s	\nfd: %d	ret: %d\n", line, fd, i);
//	ft_strdel(&line);
//	system("leaks test_gnl");
	return (0);
}
