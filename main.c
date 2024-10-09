/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:08:55 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/09 13:46:27 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <fcntl.h>
#include <stdlib.h>
#include "libft.h"

void	test(unsigned int i, char *c)
{
	if(i == 0 && *c >= 97 && *c <= 122)
		*c -= 32;

	if(*c == ' ')
		*c = '_';
	if(*c == '.')
		*c = '!';

}

void del(void * content)
{
	free(content);
}

int     main(void)
{
        /*
	char    buffer[] = "ABCDEFGH";
	char	buff[10] = "Hello ";
	char	buff1[10] = "Hello ";
	char	str[] = "may the force be with you.";
	char	**split = ft_split(str, 'e');
	int	fd = open("output.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	int	i = 0;

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
	printf("%s\n", ft_strtrim(str, "May you."));
	printf("\n-------------------------------------------\n");
	printf("Original = %s\n", str);
	i = 0;
	while (split[i] != 0)
	{
		printf("S%i = |%s\n", i, split[i]);
		i++;
	}
	printf("S%i = %s\n", i, split[i]);
	printf("%s", split[0]);
	printf("%s\n", ft_itoa(-+2147483647));
	printf("Original = %s\n", str);
	ft_striteri(str, test);
	printf("Modificada = %s\n", str);

	while (str[i] != 0)
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
	ft_putnbr_fd(5524482, fd);
	close(fd);
	write(1, "\n", 1);
	

	char	*str = malloc(sizeof(char) * 27);
	char s[] = "May the force be with you!";
	int i = 0;
	while (s[i] != 0)
	{
		str[i] = s[i];
		i++;
	}

	char	*strnew = "I am your father.";
	t_list	*strl = ft_lstnew(str);
	printf("---------- ft_lstnew.c ---------\n");
	printf("strl->content = %s\n", (char *)strl->content);
	t_list	*strlnew = ft_lstnew(strnew);
	ft_lstadd_front(&strl, strlnew);
	printf("\n ---------- ft_lstadd_front.c -------------\n");
	printf("strl->content = %s\n", (char *)strl->content);
	printf("str->next->content = %s\n", (char *)strl->next->content);
	printf("\n----------- ft_lstsize.c -----------------\n");
	printf("strl size = %d\n", ft_lstsize(strl));
	printf("\n----------- ft_lstsize.c -----------------\n");
	t_list	*last = ft_lstlast(strl);
	printf("last node->content = %s\n", (char *)last->content);
	printf("\n----------- ft_lstadd_back.c -----------------\n");
	char	*strback = "Help me, obi-wan kenobi.";
	t_list	*strlback = ft_lstnew(strback);
	ft_lstadd_back(&strl, strlback);
	t_list	*lst = strl;
	while (lst != 0)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n----------------- ft_lstdelone.c -----------------\n");
	t_list	*node = strl->next->next;
	ft_lstdelone(strl->next, del);
	strl->next = node;
	t_list	*lst1 = strl;
	while (lst1 != 0)
	{
		printf("%s\n", (char *)lst1->content);
		lst1 = lst1->next;
	}
	printf("\n----------------- ft_lstdelone.c -----------------\n");
	printf("BEFORE\n");
	t_list	*newl = ft_lstnew(ft_strdup("May"));
	ft_lstadd_back(&newl, ft_lstnew(ft_strdup("the")));
	ft_lstadd_back(&newl, ft_lstnew(ft_strdup("force")));
	ft_lstadd_back(&newl, ft_lstnew(ft_strdup("be")));
	ft_lstadd_back(&newl, ft_lstnew(ft_strdup("with")));
	ft_lstadd_back(&newl, ft_lstnew(ft_strdup("you.")));
	lst1 = newl;
	while (lst1 != 0)
	{
		printf("%s\n", (char *)lst1->content);
		lst1 = lst1->next;
	}
	lst1 = newl;
	char *a = "be";
	while (ft_strncmp(lst1->content, a, 2) == 0)
	{
		lst1 = lst1->next;
	}
	ft_lstclear(lst1, del);
	lst1 = newl;
	while (lst1 != 0)
	{
		printf("%s\n", (char *)lst1->content);
		lst1 = lst1->next;
	}
*/
	char **str = ft_split(0, '_');
	printf("%s\n", str[0]);
	return (0);
}
