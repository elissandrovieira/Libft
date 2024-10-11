/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:37:27 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/11 17:49:10 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*str;

	if (!s)
		return(0);
	size = ft_strlen(s);
	if (start > size)
	{
		start = size;
		size = 0;
	}
	else
		size -= start;
	if (size > len)
		size = len;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s[start] != 0 && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
