#include <libft.h>
#include <stddef.h>
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;

    if(!(ptr = malloc(count * size)))
            return (0);
    ft_bzero(ptr, count * size);
    return (ptr);
}
