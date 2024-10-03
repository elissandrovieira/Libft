/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:08:55 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/03 18:38:15 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int     main(void)
{
        //char    buffer[] = "ABCDEFGH";
	//char	buff[10] = "Hello ";
	//char	buff1[10] = "Hello ";
//	char	*str = "May the force be with you.";
//	char	**split = ft_split(str, 'e');
//	int	i;

        /*ft_memmove(buffer + 2, buffer, 5);
        printf("memmove: %s\n", buffer);
        strcpy(buffer, "ABCDEFGH");
        ft_memcpy(buffer + 2, buffer, 5);
        printf("memcpy: %s\n", buffer);
	printf("\n------------------------------------------\n");
	printf("size = %ld\n", strlcat(buff, ",world", 5));
	printf("%s", buff);
	printf("size = %ld\n", ft_strlcat(buff1, ",world", 5));
        printf("%s", buff1);
	printf("\n-------------------------------------------\n");
        printf("mine = %s\n", ft_strnstr("paralelepipedo", "lele", 5));
        printf("std = %s\n", strnstr("paralelepipedo", "lele", 5));
	printf("\n-------------------------------------------\n");
	printf("\n-------------------------------------------\n");
	printf("%s\n", ft_strtrim(str, "May you."));
	printf("\n-------------------------------------------\n");
	printf("Original = %s\n", str);
	i = 0;
	while (split[i] != 0)
	{
		printf("S%i = %s\n", i, split[i]);
		i++;
	}
	printf("%s", split[0]);
	*/
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}
