#include "libft.h"

int main()
{
	int a;
	char *arr = (char *)&a;

	ft_memset(arr, 210, 1);
	ft_memset(arr + 1, 4, 1);

	printf("%d\n", arr); 
	// int b =4294966596;
	// printf("%d\n", b); 

}