#include <stdlib.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *trimmed;
    int     i;
    int     j;

    if (set == 0)
        return (ft_strdup(s1));
    if (!(trimmed = (char *)malloc(sizeof(char) * ft_strlen(s1) - (ft_strlen(set) * 2) + 1)))
        return (0);
    
    return (trimmed);
}
