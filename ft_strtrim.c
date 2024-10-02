/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:25:12 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/02 00:44:28 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	while (s1++ && ft_strchr(set, *s1) != 0)
	len = ft_strlen(s1);
	while (s1[len] && ft_strchr(set, s1[len]) != 0)
			len--;
	return (ft_substr(s1, 0, len));
}
