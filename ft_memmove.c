/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:01:26 by sstark            #+#    #+#             */
/*   Updated: 2018/12/14 16:01:28 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char 	*pd;
	unsigned char	*ps;

	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	if (dst < src)
	{
		pd += len-1;
		ps += len-1;
		while (len--)
			*pd-- = *ps--;
	}
	else
		ft_memcpy(dst, src, len);
	return ((void *)(dst));
}


int main()
{
	int sl[] = {1, 2, 3, 4, 5};
	int s1[] = {1, 2, 3, 4, 5};
	ft_memmove(s1, "sflkdsmfkmsdlmfsdasdasdasdsadasdasdasd", 20);
	memmove(sl, "sflkdsmfkmsdlmfsdasdasdasdsadasdasdasd", 20);
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", s1[i] == sl[i] ? "OK" : "KO!");
	}
	return (0);
}
