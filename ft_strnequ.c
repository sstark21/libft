/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 19:21:17 by sstark            #+#    #+#             */
/*   Updated: 2018/12/26 19:21:20 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (*s1 == *s2 && *s1 && *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 == *s2 ? 1 : 0);
}
