char    *ft_strrchr(const char *s, int c)
{
    char    ch;
    int     i;

    ch = (char)c;
    i = 0;
    while (s[i])
        i++;
    if (s[i] == ch)
        return ((char *)s + i);
    while (i >= 0)
    {
        if (s[i] == ch)
            return ((char *)s + i);
        i--;
    }
    return (0);
}
/*
#include <stdio.h>
int main ()
{
    char    str[] = "abceade";
    int     c = 'a';
    printf("%s\n", ft_strrchr(str, c));
}*/
