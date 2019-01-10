/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 15:41:31 by sstark            #+#    #+#             */
/*   Updated: 2018/12/13 15:41:35 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *add)
{
	char *cpydest;

	cpydest = dest;
	while (*dest)
		dest++;
	while (*add)
		*dest++ = *add++;
	*dest = '\0';
	return (cpydest);
}
