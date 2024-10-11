/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:32:08 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/11 16:11:39 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	count;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	count = d_len;
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] != 0 && count + 1 < size)
		dst[count++] = src[i++];
	dst[count] = '\0';
	return (s_len + d_len);
}
