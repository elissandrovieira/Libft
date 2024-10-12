/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:36:58 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/12 12:21:51 by eteofilo         ###   ########.fr       */
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
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	free_str(char **strs)
{
	int		i;

	i = 0;
	while (strs[i] != 0)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}

static int	get_str(char **strs, char *s, char c)
{
	char	*start;
	int		len;
	int		i;

	start = s;
	len = 1;
	i = 0;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
		{
			start = (char *)(s + 1);
			len = 0;
		}
		if (*s != c && (*(s + 1) == c || *(s + 1) == 0))
		{
			strs[i] = ft_substr(start, 0, len);
			if (strs[i++] == 0)
				return (free_str(strs));
		}
		len++;
		s++;
	}
	strs[i] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		is_ok;

	if (!s)
	{
		strs = (char **)malloc(sizeof(char *));
		strs[0] = 0;
		return (strs);
	}
	strs = (char **)malloc(sizeof(char *) * (count_str(s, c) + 1));
	if (!strs)
		return (0);
	is_ok = get_str(strs, (char *)s, c);
	if (is_ok == 0)
		free(strs);
	return (strs);
}
