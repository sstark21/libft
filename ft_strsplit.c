/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 20:53:43 by sstark            #+#    #+#             */
/*   Updated: 2018/12/29 20:53:45 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_hui(char *str, char c)
{
	int		i;

	i = (*str != c && *str);
	while (*str)
	{
		if (*str == c)
		{
			while (*str == c && *str)
				str++;
			if (*str)
				i++;
		}
		if (*str)
			str++;
	}
	return (i);
}

static	int		ft_lolkek(char const *str, char c)
{
	int		i;

	i = 0;
	while (*str != c && *str++)
		i++;
	return (i);
}

static	char	*ft_pizda(char const **s, char c)
{
	char	*rez;
	int		i;

	i = ft_lolkek(*s, c);
	rez = ft_strnew(i);
	while (**s != c && **s)
	{
		*rez++ = **s;
		(*s)++;
	}
	return (rez - i);
}

static	char	**ft_check(char **s, int f)
{
	int		j;
	int		flag;

	flag = 0;
	j = f;
	if (!s)
		return (NULL);
	while (j > 0)
	{
		if (!s[j-- - 1])
			flag = 1;
	}
	if (flag)
	{
		while (f > -1)
			ft_memdel((void *)&s[f--]);
		free(s);
	}
	return (flag ? NULL : s);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**rez;

	if (!s)
		return (NULL);
	i = ft_hui((char *)s, c);
	if (!(rez = (char **)malloc((i + 1) * sizeof(char *))))
		return (NULL);
	rez[i] = NULL;
	while (*s && rez)
	{
		if (*s != c)
			*rez++ = ft_pizda(&s, c);
		else
			s++;
	}
	return (ft_check(rez - i, i));
}
