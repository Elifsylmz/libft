#include "libft.h"

void *ft_memchr(const void *b, int c, size_t len)
{
    unsigned char *a;
    a = (unsigned char *)b;

    while(len--)
    {
        if(*a == c)
            return((void *)a);
        a++;
    }
    return 0;

}

int main()
{
    char arr[] = "Elif Sema";
    char ch = 'S';

    char *result = (char *)ft_memchr(arr, ch, 20);

    if (result)
        printf("Karakter bulundu: %s\n", result);  // "Sema"
    else
        printf("Karakter bulunamadı.\n");
}
// int main()
// {
//     int b[] = {1, 2, 3, 4};
//     int c = 3;

//     printf("%p\n", ft_memchr(b, c, 16));
// }