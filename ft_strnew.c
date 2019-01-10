/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 11:12:56 by sstark            #+#    #+#             */
/*   Updated: 2018/12/26 11:12:58 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *c;

	if (size > 0)
	{
		if (!(c = (char *)malloc((size + 1) * sizeof(char))))
			return (0);
		ft_bzero(c, size + 1);
		return (c);
	}
	else
		return (NULL);
}
