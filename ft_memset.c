/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 12:44:15 by sstark            #+#    #+#             */
/*   Updated: 2018/12/13 12:44:18 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)dest;
	while (n-- > 0)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
