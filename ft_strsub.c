/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 19:44:36 by sstark            #+#    #+#             */
/*   Updated: 2018/12/26 19:44:38 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *new;
    int i;
    int check;

    i = 0;
    check = ft_strlen((char *)s);
    new = (char *)malloc(len * sizeof(char));
    if (start < check) {
        while (len > 0) {
            new[i] = s[start];
            i++;
            start++;
            len--;
        }
        return (new);
    }
    return (NULL);
}

int main()
{
    printf("%s\n", ft_strsub("qwerty", 8, 4));
    return (0);
}