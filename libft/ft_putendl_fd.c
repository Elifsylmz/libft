#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;

    if(!s)
    return;

    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

int main()
{
    ft_putendl_fd("Merhaba Elif", 1); // terminalde: Merhaba Elif (alt satıra geçer)
    return 0;
}
