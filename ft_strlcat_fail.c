/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:50:23 by sstark            #+#    #+#             */
/*   Updated: 2018/12/17 16:50:26 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int len_dst;
	int i;

	i = 0;
	len_dst = ft_strlen(dst)ж
	if (size <= len_dst)
		return (len_dst + size);
	else
	{
		while (size)
		{
			dst[len_dst] = src[i];
			len_dst++;
			i++;
			size--;
		}
	}
	return (len_dst + size);
}

int main()
{
	char s1[10] = "abc";
	char s2[10] = "abc";
	printf("%zu\n", ft_strlcat(s1, "def", 4));
	printf("%lu\n", strlcat(s1, "def", 4));
	printf("%s = %s\n", s1, s2);
	return (0);
}
