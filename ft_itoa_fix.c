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
#include <stdio.h>

char	*ft_itoa(int n)
{
	int			flag;
	long int	len;
	int			i;
	char		*new;
	int			j;


	j = 0;
	flag = 1;
	len = n;

	while (len != 0)
	{
		len /= 10;
		i++;
	}
	new = (char *)malloc(i + 1);
	len = n;
	if (len < 0)
	{
		new[j] = '-';
		j++;
		len *= -1;
	}
	new[i + j] = '\0';
	if (len == 0)
	{
		new = (char *)malloc(1);
		*new = '0';
		return (new);
		//printf("%s\n", new);
	}
	while (i--)
	{
		new[j++] =(len / ft_exponentiation(10, i) + '0');
		len -= (len / ft_exponentiation(10, i)) * ft_exponentiation(10, i);
	}
	return (new);
}

int main()
{
	printf("%s\n", ft_itoa(1));
	//printf("%d\n", +30);
	return (0);
}