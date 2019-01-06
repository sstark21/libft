/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:17:49 by sstark            #+#    #+#             */
/*   Updated: 2018/12/26 21:17:52 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*new;
	char	*copy;

	i = ft_strlen((char *)s);
	copy = (char *)s;
	while (*s == '\t' || *s == '\n' || *s == '\v' || *s == '\r' || *s == ' ')
	{
		j++;
		s++;
	}
	while (*s)
		s++;
	while ((*s == '\t' || *s == '\n' || *s == '\v' || *s == '\r' ||
	*s == ' ' || *s == '\0') && (s != copy))
	{
		s--;
		k++;
	}
	new = (char *)malloc(i == j ? i - j - k + 1 : 1);
	if (j == k)
		new[0] = '\0';
	else
		ft_memcpy(new, copy + j, i - k - j);
	new[i - j - k] = '\0';
	return (new);
}

int main()
{
	printf("%s\n", ft_strtrim("j "));
}
