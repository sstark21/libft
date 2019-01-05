/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:18:46 by sstark            #+#    #+#             */
/*   Updated: 2018/12/13 14:18:48 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		((unsigned char*)dst)[i] = ((const char*)src)[i];
		i++;
	}
	((unsigned char*)dst)[i] = ((const char*)src)[i];
	return (dst);
}
