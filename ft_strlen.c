#include <stddef.h>
size_t  ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != 0)
        i++;
    return (i);
}
/*
#include <stdio.h>
int main ()
{
    char    str[] = "a";
    printf("size of str: %zu", ft_strlen(str));
}
*/
