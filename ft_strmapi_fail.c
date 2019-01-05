/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 13:34:57 by sstark            #+#    #+#             */
/*   Updated: 2018/12/26 13:34:59 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int j;
    char *c

    i = ft_strlen(*s);
    j = 0;
    c = (char *)malloc(i * sizeof(char));
    while (j!= i)
    {
		c[j] = f(i, s[j++]);
    }
	return (c);
}
