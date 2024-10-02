/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:08:55 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/02 14:34:27 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int     main(void)
{
        char    buffer[] = "ABCDEFGH";
	char	buff[10] = "Hello ";
	char	buff1[10] = "Hello ";

        ft_memmove(buffer + 2, buffer, 5);
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
	printf("%s", ft_strtrim("May the force be with you.", "May you."));

        return (0);
}
