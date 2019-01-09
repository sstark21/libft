/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 12:59:59 by sstark            #+#    #+#             */
/*   Updated: 2018/12/26 13:00:02 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		c;
	char	*t;
	int		j;

	c = ft_strlen((char *)s);
	t = (char *)malloc(c * sizeof(char));
	j = 0;
	while (j != c)
	{
		t[j] = f(s[j]);
		j++;
	}
	return (t);
}
