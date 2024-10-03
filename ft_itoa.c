/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:11:21 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/03 18:44:27 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int	len;

	len = 1;

	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;

	len = get_len(n);
	if (n == -2147483648)
	{
		str = (char *)malloc(sizeof(char) * 12);
		str = "-2147483648\0";
		return (str);
	}

	if (n < 0)
	{
		n *= -1;
		str = (char *)malloc(sizeof(char) * (len + 2));
		*str = '-';
		str++;
	}
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	len--;
	while (len > 0)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (str);
}
