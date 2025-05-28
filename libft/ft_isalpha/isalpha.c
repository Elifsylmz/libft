#include <stdio.h>

// parametreyi int almamızın sebebi unsigned int, int veya char gönderilse de yani her durumda değeri okuyabilmek ascii olarak da yazılabilir çünki :)
int     ft_isalpha(int c){
    if ((c <='z' && c >= 'a')||(c <= 'Z' && c >= 'A'))
        return 1;
    return 0;
} 

int main(){

    char deneme = 'b';
    char de2 = 'D';
    int de3 = 0 ;
    int de4 = '!' ;

    if (ft_isalpha(deneme))
        printf("%s\n", "alfabetik bir karakter.");
    else
        printf("%s\n", "alfabetik karakter değil.");

    printf("%d\n", ft_isalpha(de2));
    printf("%d\n", ft_isalpha(de3));
 
    if (ft_isalpha(de4))
        printf("'%c' bir harftir.\n", de4);
    else
        printf("'%c' bir harf degildir.\n", de4);
}
