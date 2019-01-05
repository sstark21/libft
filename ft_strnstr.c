/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 22:18:42 by sstark            #+#    #+#             */
/*   Updated: 2018/12/30 22:18:44 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t hlen)
{
	size_t nlen;
	int rez;

	if (*needle == '\0')
		return ((char *)haystack);
	nlen = ft_strlen((char *)needle);
	rez = 1;
	while (nlen <= hlen && *haystack && (rez = ft_strncmp(haystack, needle, nlen)))
	{
		hlen--;
		haystack++;
	}
	if (rez != 0)
		return (NULL);
	else
		return ((char *)haystack);
}