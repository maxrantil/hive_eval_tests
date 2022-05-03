/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahermawa <ahermawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:52:43 by ahermawa          #+#    #+#             */
/*   Updated: 2022/04/13 16:53:11 by ahermawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	while (((*s1 && *s2) && *s1 == *s2) && n > 0)
	{
		n--;
		s1++;
		s2++;
	}
	if ((*s1 == *s2) || n == 0)
		return (1);
	else
		return (0);
}
