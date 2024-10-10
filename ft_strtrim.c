/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:25:12 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/10 18:58:42 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	if (!s1)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, *(s1 + i)) != 0)
		i++;
	if (s1[i] == 0)
		len = 1;
	else
		len = ft_strlen(s1 + i);
	while (len && ft_strchr(set, s1[len + i]) != 0)
		len--;
	return (ft_substr(s1 + i, 0, len + 1));
}
