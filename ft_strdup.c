#include <stdlib.h>
#include <libft.h>

char    *ft_strdup(const char *s1)
{
    int     i;
    char    *ptr;

    if (!(ptr = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
            return (0);

    ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
    return (ptr);
}
/*
#include <stdio.h>

int main ()
{
    char    str[] = "testaeee";
    printf("%s\n", ft_strdup(str));
}*/
