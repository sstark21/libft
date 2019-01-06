/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:48:47 by sstark            #+#    #+#             */
/*   Updated: 2018/12/10 17:48:49 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *str, int ch)
{
	char *last_chr;

	last_chr = NULL;
	while (*str != '\0')
	{
		if (*str == (char)ch)
			last_chr = (char *)str;
		str++;
	}
	if (*str == (char)ch)
		return ((char *)str);
	else
		return (last_chr);
}
