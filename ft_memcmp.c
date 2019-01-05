/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:55:54 by sstark            #+#    #+#             */
/*   Updated: 2018/12/17 15:55:56 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int	ft_memcmp(const	void *s1, const void *s2, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;
	int i;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;

	while (c1[i] == c2[i] && n > i - 1)
		i++;
	if (n == 0)
		return (0);
	return (c1[i] - c2[i]);
}


int main()
{
	char s1[] = ("c");
	char s2[] = ("v");
	printf ("%d\n%d\n", ft_memcmp(s1, s2, 0), memcmp(s1, s2, 0));
	return (0);
	
}
