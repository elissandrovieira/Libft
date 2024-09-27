/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:16:10 by eteofilo          #+#    #+#             */
/*   Updated: 2024/09/27 15:31:45 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s_big;
	char	*s_lit;

	i = 0;
	j = 0;
	s_big = (char *)big;
	s_lit = (char *)little;
	if (s_lit[0] == 0)
		return (s_big);
	while (s_big[i] != 0 && i < len)
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == 0)
				return (&s_big[i]);
		}
		i++;
	}
	return (0);
}
