/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:08:55 by eteofilo          #+#    #+#             */
/*   Updated: 2024/10/12 13:28:42 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>
#include "libft.h"

//AUX
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
	char	*str = (char *)content;
	if (*str == 32)
	free(content);
	printf("conteúdo deletado\n");
}

void print_lcontent(void *c)
{
	printf("%s\n", (char *)c);
}

void *lst_toupper(void *c)
{
	char *cst = (char *)c;
	char *str = (char *)malloc(sizeof(char) * ft_strlen((char *)c));
	int i = 0;

	while (cst[i] != 0)
	{
		str[i] = ft_toupper(cst[i]);
		i++;
	}
	return (str);
}

char mapi_captalize(unsigned int i, char c)
{
	if (i == 0)
		ft_toupper(c);
	else if (c == ' ')
		c = '_';
	return (c);
}

void print_char(unsigned int index, char *c) {
    printf("Index: %u, Char: %c\n", index, *c);
}

//P1
void test_isalpha()
{
	printf("\n---------- ft_isalpha.c ---------\n");
	printf("isalpha %d\n", isalpha('$'));
	printf("ft_isalpha %d\n", ft_isalpha('$'));
	printf("------------------------------\n");
	printf("isalpha %d\n", isalpha('A'));
	printf("ft_isalpha %d\n", ft_isalpha('A'));
	printf("------------------------------\n");
	printf("isalpha %d\n", isalpha('Z'));
	printf("ft_isalpha %d\n", ft_isalpha('Z'));
	printf("------------------------------\n");
	printf("isalpha %d\n", isalpha('a'));
	printf("ft_i'a'pha %d\n", ft_isalpha('a'));
	printf("------------------------------\n");
	printf("isalpha %d\n", isalpha('z'));
	printf("ft_isalpha %d\n", ft_isalpha('z'));
	printf("------------------------------\n");
	printf("isalpha %d\n", isalpha('0'));
	printf("ft_isalpha %d\n", ft_isalpha('0'));
}

void test_isdigit()
{
	printf("\n---------- ft_isdigit.c ---------\n");
	printf("isdigit %d\n", isdigit('$'));
	printf("ft_isdigit %d\n", ft_isdigit('$'));
	printf("------------------------------\n");
	printf("isdigit %d\n", isdigit('L'));
	printf("ft_isdigit %d\n", ft_isdigit('L'));
	printf("------------------------------\n");
	printf("isdigit %d\n", isdigit('0'));
	printf("ft_isdigit %d\n", ft_isdigit('0'));
	printf("------------------------------\n");
	printf("isdigit %d\n", isdigit('9'));
	printf("ft_isdigit %d\n", ft_isdigit('9'));
}

void test_isalnum()
{
	printf("\n---------- ft_isalnum.c ---------\n");
	printf("isalnum %d\n", isalnum('$'));
	printf("ft_isalnum %d\n", ft_isalnum('$'));
	printf("------------------------------\n");
	printf("isalnum %d\n", isalnum('A'));
	printf("ft_isalnum %d\n", ft_isalnum('A'));
	printf("------------------------------\n");
	printf("isalnum %d\n", isalnum('Z'));
	printf("ft_isalnum %d\n", ft_isalnum('Z'));
	printf("------------------------------\n");
	printf("isalnum %d\n", isalnum('a'));
	printf("ft_isalnum %d\n", ft_isalnum('a'));
	printf("------------------------------\n");
	printf("isalnum %d\n", isalnum('z'));
	printf("ft_isalnum %d\n", ft_isalnum('z'));
	printf("------------------------------\n");
	printf("isalnum %d\n", isalnum('0'));
	printf("ft_isalnum %d\n", ft_isalnum('0'));
	printf("------------------------------\n");
	printf("isalnum %d\n", isalnum('9'));
	printf("ft_isalnum %d\n", ft_isalnum('9'));
}

void test_isascii()
{
	printf("\n---------- ft_isascii.c ---------\n");
	printf("isascii %d\n", isascii(2));
	printf("ft_isascii %d\n", ft_isascii(2));
	printf("------------------------------\n");
	printf("isascii %d\n", isascii(128));
	printf("ft_isascii %d\n", ft_isascii(128));
}

void test_isprint()
{
	printf("\n---------- ft_isprint.c ---------\n");
	printf("isprint %d\n", isprint(30));
	printf("ft_isprint %d\n", ft_isprint(30));
	printf("------------------------------\n");
	printf("isprint %d\n", isprint(' '));
	printf("ft_isprint %d\n", ft_isprint(' '));
	printf("------------------------------\n");
	printf("isprint %d\n", isprint('~'));
	printf("ft_isprint %d\n", ft_isprint('~'));
}

void test_strlen()
{
	printf("\n---------- ft_strlen.c ---------\n");
	char *s = "May the force be with you.";
	printf("string: %s\n", s);
	printf("strlen: %ld\n", strlen(s));
	printf("ft_strlen: %ld\n", ft_strlen(s));
}

void test_memset()
{
	printf("\n---------- ft_memset.c ---------\n");
	char str1[27] = "May the force be with you.";
	char str2[27] = "May the force be with you.";

	printf("String before: %s\n", str1);
	memset(str1, 'B', 3);
	ft_memset(str2, 'B', 3);
	printf("memset: %s\n", str1);
	printf("ft_memset: %s\n", str2);
}

void test_bzero()
{
	char buff1[27] = "May the force be with you.";
	char buff2[27] = "May the force be with you.";

	bzero(buff1,2);
	ft_bzero(buff2,2);

	printf("\n---------- ft_bzero.c ---------\n");
	printf("Buffer bzero: %c\n",*buff1);
	printf("Buffer ft_bzero: %c\n",*buff2);

}

void test_memcpy()
{
	printf("\n---------- ft_memcpy.c ---------\n");
	int	i = 27;
	char s1[i];
	char s2[i];

	memcpy(s1, "May the force be with you.", i);
	ft_memcpy(s2, "May the force be with you.", i);
	printf("memcpy: %s\n",s1);
	printf("ft_memcpy: %s\n",s2);
}

void test_memmove()
{
	printf("\n---------- ft_memmove.c ---------\n");
	char	buffer1[] = "ABCDEFGH";
	char	buffer2[] = "ABCDEFGH";
	ft_memmove(buffer1 + 2, buffer1, 5);
	ft_memmove(buffer2 + 2, buffer2, 5);
	printf("memcpy: %s\n",buffer1);
	printf("ft_memcpy: %s\n",buffer2);
}

void test_strlcpy()
{
	printf("\n---------- ft_strlcpy.c ---------\n");
	char src[] = "May the force be with you.";
    char dst1[27];
    char dst2[27];
	int size1 = strlcpy(dst1, src, 20);
	int size2 = ft_strlcpy(dst2, src, 20);

    printf("strlcpy: %s\n", dst1);
    printf("strlcpy size: %d\n", size1);
    printf("ft_strlcpy: %s\n", dst2);
    printf("ft_strlcpy size: %d\n", size2);
}

void test_strlcat()
{
	printf("\n---------- ft_strlcat.c ---------\n");
	char src[] = "be with you.";
    char dst1[15] = "May the force ";
    char dst2[15] = "May the force ";
	int size1 = strlcat(dst1, src, 7);
	int size2 = ft_strlcat(dst2, src, 7);

    printf("strlcat: %s\n", dst1);
    printf("strlcat size: %d\n", size1);
    printf("ft_strlcat: %s\n", dst2);
    printf("ft_strlcat size: %d\n", size2);
}

void test_toupper()
{
	printf("\n---------- ft_toupper.c ---------\n");
	char c = 'a';
	printf("Before: %c\n", c);
	printf("After: %c\n", ft_toupper(c));
}

void test_tolower()
{
	printf("\n---------- ft_tolower.c ---------\n");
	char c = 'A';
	printf("Before: %c\n", c);
	printf("After: %c\n", ft_tolower(c));
}

void test_strchr()
{
	printf("\n---------- ft_strchr.c ---------\n");
	char *s = "May the force be with you.";
	char c = 'e';
	printf("Original: %s\n", s);
	printf("strchr: %s\n", strchr(s, c));
	printf("ft_strchr: %s\n", ft_strchr(s, c));
}

void test_strrchr()
{
	printf("\n---------- ft_strrchr.c ---------\n");
	char *s = "May the force be with you.";
	char c = 'e';
	printf("Original: %s\n", s);
	printf("strrchr: %s\n", strrchr(s, c));
	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
}

void test_strncmp()
{
	printf("\n---------- ft_strcmp.c ---------\n");
	char *s1 = "ABCDEFGH";
	char *s2 = "ABCDEHKL";
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	printf("strncmp(s1, s2, 5): %d\n", strncmp(s1, s2, 5));
	printf("ft_strncmp(s1, s2, 5): %d\n", ft_strncmp(s1, s2, 5));
	printf("------------------------------\n");
	printf("strncmp(s1, s2, 6): %d\n", strncmp(s1, s2, 6));
	printf("ft_strncmp(s1, s2, 6): %d\n", ft_strncmp(s1, s2, 6));
}

void test_memchr()
{
	printf("\n---------- ft_memchr.c ---------\n");
	char *str = "May the force be with you.";
    printf("memchr(str, 'f', 9): %s\n", (char *)memchr(str, 'f', 9));
    printf("ft_memchr(str, 'f', 9): %s\n", (char *)ft_memchr(str, 'f', 9));
	printf("------------------------------\n");
    printf("memchr(str, 'f', 0): %s\n", (char *)memchr(str, 'f', 0));
    printf("ft_memchr(str, 'f', 0): %s\n", (char *)ft_memchr(str, 'f', 0));
	printf("------------------------------\n");
    printf("memchr(str, 0, 9): %s\n", (char *)memchr(str, 0, 9));
    printf("ft_memchr(str, 0, 9): %s\n", (char *)ft_memchr(str, 0, 9));
}

void test_memcmp()
{
	printf("\n---------- ft_memcmp.c ---------\n");
	char *s1 = "ABCDEFGH";
	char *s2 = "ABCDEHKL";
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	printf("memcmp(s1, s2, 5): %d\n", memcmp(s1, s2, 5));
	printf("ft_memcmp(s1, s2, 5): %d\n", ft_memcmp(s1, s2, 5));
	printf("------------------------------\n");
	printf("memcmp(s1, s2, 6): %d\n", memcmp(s1, s2, 6));
	printf("ft_memcmp(s1, s2, 6): %d\n", ft_memcmp(s1, s2, 6));
}

void test_strnstr()
{
	printf("\n---------- ft_strnstr.c ---------\n");
	char *s1 = "May the force be with you.";
	char *s2 = "force";
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	printf("strnstr(s1, s2, 13): %s\n", strnstr(s1, s2, 13));
    printf("ft_strnstr(s1, s2, 13): %s\n", ft_strnstr(s1, s2, 13));
}

void test_atoi()
{
	printf("\n---------- ft_atoi.c ---------\n");
	printf("atoi: %i\n",atoi("45"));
	printf("ft_atoi: %i\n",ft_atoi("45"));
	printf("------------------------------\n");
	printf("atoi: %i\n",atoi("   77"));
	printf("ft_atoi: %i\n",ft_atoi("   77"));
	printf("------------------------------\n");
	printf("atoi: %i\n",atoi("   --99"));
	printf("ft_atoi: %i\n",ft_atoi("   --99"));
	printf("------------------------------\n");
	printf("atoi: %i\n",atoi("  ++11"));
	printf("ft_atoi: %i\n",ft_atoi("  ++11"));
	printf("------------------------------\n");
	printf("atoi: %i\n",atoi("   -25a4a"));
	printf("ft_atoi: %i\n",ft_atoi("   -25a4a"));
	printf("------------------------------\n");
	printf("atoi: %i\n",atoi("2147483647"));
	printf("ft_atoi: %i\n",ft_atoi("2147483647"));
	printf("------------------------------\n");
	printf("atoi: %i\n",atoi("-2147483648"));
	printf("ft_atoi: %i\n",ft_atoi("-2147483648"));
}

void test_calloc()
{
	char *ptr = ft_calloc(1,2);

	printf("\n---------- ft_calloc.c ---------\n");
	if (ptr == NULL)
		printf("calloc failed\n");
	else
		printf("calloc success\n");
	free(ptr);
}

void test_strdup()
{
	printf("\n---------- ft_strdup.c ---------\n");
	char *s = "May the force be with you.";
    char *copy = ft_strdup(s);
    printf("string : %s\n", s);
    printf("copied string : %s\n", copy);
}


//P2
void test_substr()
{
	printf("\n---------- ft_substr.c ---------\n");
	char *s = "May the force be with you.";
    char *substr = ft_substr(s, 9, 8);
    printf("string : %s\n", s);
    printf("substring : %s\n", substr);
}

void test_strjoin()
{
	printf("\n---------- ft_strjoin.c ---------\n");
	char *s1 = "May the force ";
	char *s2 = "be with you.";
    char *join = ft_strjoin(s1, s2);
    printf("S1 : %s\n", s1);
    printf("S2 : %s\n", s2);
    printf("strjoin : %s\n", join);
}

void test_split()
{
	printf("\n---------- ft_split.c ---------\n");
	char	str[] = "may the force be with you.";
	char	**split = ft_split(str, 'e');
	int i = 0;
	printf("str: %s\n", str);
	while (split[i] != 0)
	{
		printf("S%i: %s\n", i, split[i]);
		i++;
	}
}

void test_strtrim()
{
	printf("\n---------- ft_strtrim.c ---------\n");
	char *s = " ee Hello, World!  e";
    char *set = "eeeoo !";
    char *result;

    result = ft_strtrim(s, set);
    printf("String: %s\n", s);
    printf("Set: %s\n", set);
    printf("Result: %s\n", result);
}

void test_itoa(void)
{
	printf("\n---------- ft_itoa.c ---------\n");
	int n1 = -2147483648;
	char *str1 = ft_itoa(n1);
	printf("Integer: %d\n", n1);
	printf("String: %s\n", str1);
	printf("------------------------------\n");
	int n2 = 2147483647;
	char *str2 = ft_itoa(n2);
	printf("Integer: %d\n", n2);
	printf("String: %s\n", str2);
	printf("------------------------------\n");
	int n3 = 0;
	char *str3 = ft_itoa(n3);
	printf("Integer: %d\n", n3);
	printf("String: %s\n", str3);
}

void test_strmapi()
{
	printf("\n---------- ft_strmapi.c ---------\n");
	char *s = "may the force be with you.";
	printf("string: %s\n", s);
	printf("ft_strmapi: %s\n", ft_strmapi(s, mapi_captalize));
}

void test_striteri()
{
	printf("\n---------- ft_striteri.c ---------\n");
	char *s = "may the force be with you.";
	printf("string: %s\n", s);
	ft_striteri(s, print_char);
	printf("ft_striteri: %s\n", s);
}

void test_putchar_fd()
{
	printf("\n---------- ft_putchar_fd.c ---------\n");
	ft_putchar_fd('L', 1);
}

void test_putstr_fd()
{
	printf("\n---------- ft_putstr_fd.c ---------\n");
	ft_putstr_fd("May the force be with you.", 1);
}

void test_putendl_fd()
{
	printf("\n---------- ft_putendl_fd.c ---------\n");
	ft_putendl_fd("May the force be with you.", 1);
}

void test_putnbr_fd()
{
	printf("\n---------- ft_putnbr_fd.c ---------\n");
	int n1 = -2147483648;
	printf("Integer: \n%d\n\n", n1);
	printf("ft_putnbr_fd: \n");
	ft_putnbr_fd(n1, 1);
	printf("\n------------------------------\n");
	int n2 = 2147483647;
	printf("Integer: \n%d\n\n", n2);
	printf("ft_putnbr_fd:\n");
	ft_putnbr_fd(n2, 1);
	printf("\n------------------------------\n");
	int n3 = 0;
	printf("Integer: \n%d\n\n", n3);
	printf("ft_putnbr_fd:\n");
	ft_putnbr_fd(n3, 1);
}

//BONUS
void test_lstnew()
{
	printf("\n----------- ft_lstnew.c -----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	printf("%s\n", (char *)strl->content);
}

void test_lstadd_front()
{
	printf("\n----------- ft_lstadd_front.c -----------------\n");
	printf("-------------- BEFORE ----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	t_list	*lst = strl;
	while (lst != 0)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("-------------- AFTER ----------------\n");
	char	*strfront = "Help me, obi-wan kenobi.";
	t_list	*strlfront = ft_lstnew(strfront);
	ft_lstadd_front(&strl, strlfront);
	while (strl != 0)
	{
		printf("%s\n", (char *)strl->content);
		strl = strl->next;
	}
}

void test_lstsize()
{
	printf("\n----------- ft_lstsize.c -----------------\n");
	printf("-------------- LIST ----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	char	*strback = "Help me, obi-wan kenobi.";
	t_list	*strlback = ft_lstnew(strback);
	ft_lstadd_back(&strl, strlback);
	t_list	*lst = strl;
	while (lst != 0)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("-------------- SIZE ----------------\n");
	int len = ft_lstsize(strl);
	printf("%d\n", len);
}

void test_lstlast()
{
	printf("\n----------- ft_lstlast.c -----------------\n");
	printf("-------------- LIST ----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	char	*strback = "Help me, obi-wan kenobi.";
	t_list	*strlback = ft_lstnew(strback);
	ft_lstadd_back(&strl, strlback);
	t_list	*lst = strl;
	while (lst != 0)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("-------------- LAST ----------------\n");
	t_list *last = ft_lstlast(strl);
	printf("%s\n", (char *)last);
}

void test_lstadd_back()
{
	printf("\n----------- ft_lstadd_back.c -----------------\n");
	printf("-------------- BEFORE ----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	t_list	*lst = strl;
	while (lst != 0)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("-------------- AFTER ----------------\n");
	char	*strback = "Help me, obi-wan kenobi.";
	t_list	*strlback = ft_lstnew(strback);
	ft_lstadd_back(&strl, strlback);
	while (strl != 0)
	{
		printf("%s\n", (char *)strl->content);
		strl = strl->next;
	}
}

void test_lstdelone()
{
	printf("\n----------- ft_lstdelone.c -----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	ft_lstdelone(strl, del);
}

void test_lstclear()
{
	printf("\n----------- ft_lstclear.c -----------------\n");
	printf("-------------- BEFORE ----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	char	*strback = "Help me, obi-wan kenobi.";
	t_list	*strlback = ft_lstnew(strback);
	ft_lstadd_back(&strl, strlback);
	t_list	*lst = strl;
	while (lst != 0)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("-------------- AFTER ----------------\n");
	ft_lstclear(&strl, del);
	while (strl != 0)
	{
		printf("%s\n", (char *)strl->content);
		strl = strl->next;
	}
}

void test_lstiter()
{
	printf("\n----------- ft_lstiter.c -----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	char	*strback = "Help me, obi-wan kenobi.";
	t_list	*strlback = ft_lstnew(strback);
	ft_lstadd_back(&strl, strlback);
	ft_lstiter(strl, print_lcontent);
}

void test_lstmap()
{
	printf("\n----------- ft_lstmap.c -----------------\n");
	printf("-------------- LIST ----------------\n");
	char	*str = "may the force be with you.";
	t_list	*strl = ft_lstnew(str);
	char	*strback = "Help me, obi-wan kenobi.";
	t_list	*strlback = ft_lstnew(strback);
	ft_lstadd_back(&strl, strlback);
	t_list *newl = strl;
	while (newl != 0)
	{
		printf("%s\n", (char *)newl->content);
		newl = newl->next;
	}
	printf("-------------- NEW LIST ----------------\n");
	t_list	*lst = ft_lstmap(strl, lst_toupper, del);
	while (lst != 0)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}


void test_all(void) {
    for (int i = 1; i <= 43; i++) {
        if (i == 1) test_isalpha();
        else if (i == 2) test_isdigit();
        else if (i == 3) test_isalnum();
        else if (i == 4) test_isascii();
        else if (i == 5) test_isprint();
        else if (i == 6) test_strlen();
        else if (i == 7) test_memset();
        else if (i == 8) test_bzero();
        else if (i == 9) test_memcpy();
        else if (i == 10) test_memmove();
        else if (i == 11) test_strlcpy();
        else if (i == 12) test_strlcat();
        else if (i == 13) test_toupper();
        else if (i == 14) test_tolower();
        else if (i == 15) test_strchr();
        else if (i == 16) test_strrchr();
        else if (i == 17) test_strncmp();
        else if (i == 18) test_memchr();
        else if (i == 19) test_memcmp();
        else if (i == 20) test_strnstr();
        else if (i == 21) test_atoi();
        else if (i == 22) test_calloc();
        else if (i == 23) test_strdup();
        else if (i == 24) test_substr();
        else if (i == 25) test_strjoin();
        else if (i == 26) test_split();
		else if	(i == 27) test_strtrim();
        else if (i == 28) test_itoa();
        else if (i == 29) test_strmapi();
        else if (i == 30) test_striteri();
        else if (i == 31) test_putchar_fd();
        else if (i == 32) test_putstr_fd();
        else if (i == 33) test_putendl_fd();
        else if (i == 34) test_putnbr_fd();
        else if (i == 35) test_lstnew();
        else if (i == 36) test_lstadd_front();
        else if (i == 37) test_lstsize();
        else if (i == 38) test_lstlast();
        else if (i == 39) test_lstadd_back();
        else if (i == 40) test_lstdelone();
        else if (i == 41) test_lstclear();
        else if (i == 42) test_lstiter();
        else if (i == 43) test_lstmap();
    }
}


int     main(int ac, char **av)
{
	(void)ac;
	int test_number = atoi(av[1]);

	if (test_number == 0)
		test_all();
    else if (test_number == 1)
        test_isalpha();
    else if (test_number == 2)
        test_isdigit();
    else if (test_number == 3)
        test_isalnum();
    else if (test_number == 4)
        test_isascii();
    else if (test_number == 5)
        test_isprint();
    else if (test_number == 6)
        test_strlen();
    else if (test_number == 7)
        test_memset();
    else if (test_number == 8)
        test_bzero();
    else if (test_number == 9)
        test_memcpy();
    else if (test_number == 10)
        test_memmove();
    else if (test_number == 11)
        test_strlcpy();
    else if (test_number == 12)
        test_strlcat();
    else if (test_number == 13)
        test_toupper();
    else if (test_number == 14)
        test_tolower();
    else if (test_number == 15)
        test_strchr();
    else if (test_number == 16)
        test_strrchr();
    else if (test_number == 17)
        test_strncmp();
    else if (test_number == 18)
        test_memchr();
    else if (test_number == 19)
        test_memcmp();
    else if (test_number == 20)
        test_strnstr();
    else if (test_number == 21)
        test_atoi();
    else if (test_number == 22)
        test_calloc();
    else if (test_number == 23)
        test_strdup();
    else if (test_number == 24)
        test_substr();
    else if (test_number == 25)
        test_strjoin();
    else if (test_number == 26)
        test_split();
	else if (test_number == 27)
		test_strtrim();
    else if (test_number == 28)
        test_itoa();
    else if (test_number == 29)
        test_strmapi();
    else if (test_number == 30)
        test_striteri();
    else if (test_number == 31)
        test_putchar_fd();
    else if (test_number == 32)
        test_putstr_fd();
    else if (test_number == 33)
        test_putendl_fd();
    else if (test_number == 34)
        test_putnbr_fd();
    else if (test_number == 35)
        test_lstnew();
    else if (test_number == 36)
        test_lstadd_front();
    else if (test_number == 37)
        test_lstsize();
    else if (test_number == 38)
        test_lstlast();
    else if (test_number == 39)
        test_lstadd_back();
    else if (test_number == 40)
        test_lstdelone();
    else if (test_number == 41)
        test_lstclear();
    else if (test_number == 42)
        test_lstiter();
    else if (test_number == 43)
        test_lstmap();
    else
	{
        printf("Invalid test number: %d\n", test_number);
	}
	return (0);
}
