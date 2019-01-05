/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 20:40:00 by sstark            #+#    #+#             */
/*   Updated: 2018/12/17 20:40:02 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	
	i = 0;
	while (i++ < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)dst)[i] == c || ((unsigned char*)src)[i] == c)
			return (NULL);
	}
	return ((void *)(dst));

}

int main()
{
	char s1[10] = "111111";
	char s2[10] = "222222";

	printf ("%s\n%s\n", ft_memccpy(s2, s1, '1', 4), memccpy(s2, s1, '1', 4));
	return (0);
}
