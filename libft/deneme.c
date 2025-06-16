#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i, j;

    if (!*needle)
        return (char *)haystack;

    for (i = 0; haystack[i] && i < len; i++) {
        j = 0;
        while (needle[j] && haystack[i + j] && i + j < len && haystack[i + j] == needle[j])
            j++;
        if (needle[j] == '\0')
            return (char *)(haystack + i);
    }
    return NULL;
}

int main()
{
    const char big[] = "selnaam nasılsın iyi misin hı";
    const char little[] = "nasılsın iyi";

    printf("%s\n", ft_strnstr(big, little, 30));
}