/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:28:50 by sstark            #+#    #+#             */
/*   Updated: 2018/12/13 16:28:52 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	char *str;
	char *to_find;

	str = (char *)haystack;
	to_find = (char *)needle;
	i = 0;
	while (*to_find != '\0' && *str != '\0')
	{
		if (*str == *to_find)
		{
			to_find++;
			i++;
		}
		else
		{
			to_find -= i;
			i = 0;
		}
		str++;
	}
	if (*to_find != '\0')
		return (0);
	return (str - i);
}

