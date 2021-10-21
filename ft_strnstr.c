#include <stddef.h>
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;

    i = 0;
    if (needle[0] == 0)
        return ((char *)haystack);
    while (haystack[i] && len > 0)
    {
        j = 0;
        while (needle[j] == haystack[i + j] && len > 0)   
        {
            j++;
            len--;
        }
        if (needle[j] == 0)
                return ((char *)haystack + i);

        i++;
        len--;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
    const char    haystack[] = "Foo Bar Baz";
    const char    needle[] = "Bar";

    printf("%s\n", ft_strnstr(haystack, needle, 10));
    printf("%s\n", strnstr(haystack, needle, 10));
}*/
