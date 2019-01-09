/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 17:23:03 by sstark            #+#    #+#             */
/*   Updated: 2018/12/30 17:23:06 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	len;
	int			i;
	char		*new;
	int			j;

	j = 0;
	len = n;
	while (len /= 10)
		i++;
	new = (char *)malloc(i + 1);
	len = n;
	if (len < 0)
	{
		new[j++] = '-';
		len *= -1;
	}
	new[i + j] = '\0';
	if (len == 0)
		return ("0\0");
	while (i--)
	{
		new[j++] = (len / ft_exponentiation(10, i) + '0');
		len -= (len / ft_exponentiation(10, i)) * ft_exponentiation(10, i);
	}
	return (new);
}