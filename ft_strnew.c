/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 11:12:56 by sstark            #+#    #+#             */
/*   Updated: 2019/01/13 15:34:00 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *c;

	if (!(c = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(c, size + 1);
	return (c);
}
