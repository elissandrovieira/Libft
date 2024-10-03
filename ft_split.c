/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:36:58 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/03 18:06:11 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (s[i] == c || i == 0)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*start;
	int		len;
	int		i;

	len = 0;
	i = 0;
	start = (char *)s;
	strs = (char **)malloc(sizeof(char *) * (count_str(s, c) + 1));
	if (!strs)
		return (0);
	while (*s++)
	{
		if (*s == c || *(s + 1) == 0)
		{
			if (*(s + 1) == 0)
				len++;
			strs[i] = ft_substr(start, 0, len);
			start = (char *)s;
			i++;
		}
		len++;
	}
	strs[i] = 0;
	return (strs);
}
