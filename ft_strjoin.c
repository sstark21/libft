/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 20:01:01 by sstark            #+#    #+#             */
/*   Updated: 2018/12/26 20:01:03 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    int i;

    new = (char *)malloc((ft_strlen((char *)s1)+(ft_strlen((char *)s2)) * sizeof(char)));
    if (!new)
        return (NULL);
    i = ft_strlen((char *)s1);
    ft_strcpy(new, s1);
    ft_strcpy(new + i, s2);
    return (new);

}


int main()
{
    printf("%s\n", ft_strjoin("abc", "def"));
    printf("%s\n", ft_strjoin("", "def"));
    printf("%s\n", ft_strjoin("abc", ""));
    printf("%s\n", ft_strjoin("\0", "def"));
    printf("%s\n", ft_strjoin("abc \0 5rgdg", "def"));
    printf("%s\n", ft_strjoin("abc", "thrthrthdef"));

    return  (0);
}