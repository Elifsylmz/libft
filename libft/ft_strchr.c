#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == c)
            return(char *)s;
        s++;
    }

    if(c == '\0')
        return (char *)s;

    else
    return NULL;
}

int main()
{
    const char s[] = "elif sema";
    char c = '\0';

    printf("%s\n", ft_strchr(s, c));
}