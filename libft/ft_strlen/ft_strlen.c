#include <stdio.h>

int ft_strlen(const char* str){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

int main(){
    char str[] = "hello";
    
    printf("%d\n", ft_strlen(str));
}