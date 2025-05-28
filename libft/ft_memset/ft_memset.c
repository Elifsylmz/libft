#include <stdio.h>

//it is used to set a one-byte value to a memory block byte by byte.
//void *str --> it is the pointer of the memory location where the memory will be set.
//int ch --> it is the value that is to be copied to the memory block.
// size_t n --> it is the number of bytes in the memory block which is set.
// memset() returns the first address of the memory block from where it starts to set the value.

char *ft_memset(char *str, int ch, size_t n){
    size_t a = 0;
    while (a < n){
        str[a] = ch;
        a++;
    }
    return str;
}

int main(){
    char str[] = "Hello, World!";
    int ch = 'e';
    size_t n = 3;

    printf("%s\n", ft_memset(str, ch, n));
}