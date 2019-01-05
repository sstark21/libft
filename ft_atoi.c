/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 11:25:29 by sstark            #+#    #+#             */
/*   Updated: 2018/12/18 11:25:33 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_help(char *d, int s)
{
	int i;
	int rez;

	i = 0;
	rez = 0;
	while (*d >= '0' && *d <= '9' && i < 19)
	{
		rez += (*d - '0') * (ft_exponentiation(10, i));
		i++;
		d--;
	}
	if (i >= 19 && s == 1)
		return (-1);
	return (i == 19 ? 0 : rez);
}

int ft_atoi(char *str)
{
    int sign;
    int rez;

    sign = 1;
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v')
        str++;
    if (*str == '-')
        sign = - 1;
    if (*str == '+' || *str == '-')
        str++;
    while (*str >= '0' && *str <= '9')
        str++;
    rez = ft_help(str - 1, sign);
    return (rez * sign);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d - ft_atoi\n%d - atoi", ft_atoi(argv[1]), atoi(argv[1]));
	return (0);
}
