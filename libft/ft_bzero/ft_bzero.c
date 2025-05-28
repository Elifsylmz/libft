#include <stdio.h>

//memset belleği istenen değerle dolduruyordu bzero ise belleği sıfırlıyormuş.
//buffer ile alakalı bir şey vardı araştır!!

char *ft_bzero(char *s, size_t n){
    size_t a = 0;
    while (a < n){
        s[a] = '\0';
        a++;
    }
    return s;
}

int main(){
    char s[] = "Hello, World!";
    size_t a = 2;
    printf("%s\n", s);
    printf("%s\n", ft_bzero(s,a));

}