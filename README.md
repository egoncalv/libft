# libft
This is my first own library in C, and also the first project at the 42 School. It contains important functions that will be used throughout the cursus.

The functions contained in this library are:

* **ft_isalpha** `int ft_isalpha(int c)`
> Checks for an alphabetic character.
* **ft_isdigit** `int	ft_isdigit(int c)`
> Checks for an numeric character.
* **ft_isalnum** `int	ft_isalnum(int c)`
> Checks for an alphanumeric character. Equivalent to `ft_isdigit || ft_isalpha`
* **ft_isascii** `int	ft_isascii(int c)`
> Checks for an ascii character. True if the given character is present in the ascii table.
* **ft_isprint** `int	ft_isprint(int c)`
> Checks for a printable character (Characters that occupie printing space)
* **ft_strlen** `size_t ft_strlen(const char *s)`
> Counts and returns the length of a given string.
* **ft_memset** `void	*ft_memset(void *b, int c, unsigned int len)`
> Copies the character c (an unsigned char) to the first n characters of the string pointed to by the argument b.
* **ft_bzero** `void	ft_bzero(void *s, int n)`
> Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
* **ft_memcpy** `void	*ft_memcpy(void *dst, const void *src, size_t n)`
> Copies n characters from memory area src to memory area dest.
* **ft_memmove** `void	*ft_memmove(void *dst, const void *src, size_t len)`
> Copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().
* **ft_strlcpy** `size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)`
> Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. Returns the length of the string it tried to create.
* **ft_strlcat** `size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)`
> Appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result. Returns the length of the final string.
* **ft_toupper** `int	ft_toupper(int c)`
> Converts a lowercase char to uppercase.
* **ft_tolower** `int	ft_tolower(int c)`
> Converts a uppercase char to lowercase.
* **ft_strchr** `char	*ft_strchr(const char *s, int c)`
> Searches for the first occurrence of the character c in the string pointed to by the argument str, returning a pointer to it or NULL if the character is not found.
* **ft_strrchr** `char	*ft_strrchr(const char *s, int c)`
> Searches for the last occurrence of the character c in the string pointed to by the argument str, returning a pointer to it or NULL if the character is not found.
* **ft_strncmp** `int	ft_strncmp(const char *s1, const char *s2, size_t n)`
> Compares at most the first n bytes of str1 and str2.
> 
> If Return value < 0 then it indicates str1 is less than str2.
> 
> If Return value > 0 then it indicates str2 is less than str1.
> 
> If Return value = 0 then it indicates str1 is equal to str2.
* **ft_memchr** `void	*ft_memchr(const void *s, int c, size_t n)`
> Searches for the first occurrence of the character c in the first n bytes of the string pointed to by the argument str. Returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.
* **ft_memcmp** `int	ft_memcmp(const void *s1, const void *s2, size_t n)`
> Compares the first n bytes of memory area str1 and memory area str2.
> 
>If Return value < 0 then it indicates str1 is less than str2.
>
>If Return value > 0 then it indicates str2 is less than str1.
>
>If Return value = 0 then it indicates str1 is equal to str2.
* **ft_strnstr** `char	*ft_strnstr(const char *haystack, const char *needle, size_t len)`
> Locates the first occurrence of string needle in the haystack string. Returns a pointer to it or NULL if neddle does not appear in haystack.
* **ft_atoi** `int	ft_atoi(const char *str)`
> Converts the string argument str to an integer.
* **ft_calloc** `void	*ft_calloc(size_t count, size_t size)`
> Allocates memory for an array of num objects of size and initializes all bytes in the allocated storage to zero. If allocation succeeds, returns a pointer to the lowest (first) byte in the allocated memory block that is suitably aligned for any object type.
* **ft_strdup** `char	*ft_strdup(const char *s1)`
>Allocates and returns a pointer to a new string which isa duplicate of the string s1.
* **ft_substr** `char *ft_substr(char const *s, unsigned int start,
size_t len)`
> Allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
* **ft_strjoin** `char *ft_strjoin(char const *s1, char const *s2)`
> Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
* **ft_strtrim** `char *ft_strtrim(char const *s1, char const *set)`
> Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
* **ft_split** `char **ft_split(char const *s, char c)`
> Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
