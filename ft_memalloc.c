/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 13:47:18 by sstark            #+#    #+#             */
/*   Updated: 2018/12/25 13:47:20 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char	*ft_memalloc(size_t size)
{
	void *c;

	c = malloc(size);
	if (!c)
		return (NULL);
	ft_memset(c, '0', size);
	return (c);
}


int main()
{
	printf("%s\n", ft_memalloc(-1));
	return (0);
}
