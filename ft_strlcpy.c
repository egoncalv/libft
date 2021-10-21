#include <stddef.h>
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int i;

    i = 0;
    while (src[i] && i < (dstsize))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    while (src[i])
        i++;
    return (i);
}
/*
#include <stdio.h>
int main()
{
    char    str[] = "abc";
    char    dst[] = "";

    ft_strlcpy(dst, str, 3);
    printf("%s\n", dst);
}*/
