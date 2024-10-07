#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>


char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		i;
	int		j;
	char	*str;

    printf("%ld\n", strlen(s1));
    printf("%ld\n", strlen(s2));
	size = strlen(s1) + strlen(s2) + 1;
    printf("%d\n", size);
	str = malloc(1 * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}

int main(void)
{
    //char *src = "May the force be with you.";
    char *dest1 = ft_strjoin("5", "5");
   // void *p = malloc(strlen("tripouille") + 1);
    //char *dest2 = strdup((char*)"coucou");
	printf("mine = %ld\n", malloc_usable_size(dest1));
//	printf("std = %ld\n", malloc_usable_size(p));
    free(dest1);
	return(0);
}