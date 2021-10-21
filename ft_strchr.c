char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    ch;

    ch = (char)c;
    i = 0;
    while (s[i])
    {
        if (ch == s[i])
            return ((char *)s + i);
        i++;
    }
    if (s[i] == ch)
        return ((char *)s + i);
    return (0);
}
/*
#include <stdio.h>
int main ()
{
    char    str[] = "Testeaa";
    int c = 'D';
    printf("%s\n", ft_strchr(str, c));
}*/
