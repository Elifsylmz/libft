#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t s_len;
    s_len = ft_strlen(s);
    
    while(s_len > 0)
    {
        if(s[s_len] == c)
            return(char *)(s + s_len);
        s_len--;
    }
    if(s[0] == c)
        return(char *)s;
    else
        return NULL;
}

int main()
{
    const char s[] = "elif sema";
    char c = ' ';

    printf("%s\n", ft_strrchr(s, c));
}