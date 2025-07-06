

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

int number_len(long nb)
{
    int len;

    if(nb == 0)
        return 1;

    len = 0;
    if(nb < 0)
    {
        len++;
        nb = nb * -1;
    }
    while(nb)
    {
        nb = nb / 10;
        len++;
    }
    return(len);
}

char *ft_itoa(int n)
{
    int len;
    long nb;
    char *newn;
    int lencont;

    nb = n;
    len = 0;

    len = number_len(nb);
    lencont = number_len(nb);
    newn = malloc(sizeof(char) * (len + 1));
    if(!newn)
        return NULL;
    if(nb == 0)
    {
        newn[0] = '0';
        newn[1] = '\0';
        return(newn);
    }
    if(nb < 0)
    {
        newn[0] = '-';
        nb = nb * -1;
    }
    while(nb > 0)
    {
        len--;
        newn[len] = '0' + (nb % 10);
        nb = nb / 10;
    }
    newn[lencont] = '\0';

    return (newn);
}

void run_test(int n)
{
    char *str = ft_itoa(n);
    if (str)
    {
        printf("ft_itoa(%d) = \"%s\"\n", n, str);
        free(str);
    }
    else
        printf("ft_itoa(%d) = NULL (malloc failed)\n", n);
}

int main(void)
{
    // Basit testler
    run_test(0);
    run_test(5);
    run_test(-5);
    run_test(123);
    run_test(-123);

    // Tek haneli pozitif-negatif
    run_test(1);
    run_test(-1);
    run_test(9);
    run_test(-9);

    // Büyük sayılar
    run_test(214748364);   // 9 hane
    run_test(-214748364);  // 10 hane

    // Sınır değerler
    run_test(INT_MAX);     // 2147483647
    run_test(INT_MIN);     // -2147483648

    // Rastgele
    run_test(1000);
    run_test(-1000);
    run_test(987654321);
    run_test(-987654321);

    return 0;
}
