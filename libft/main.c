#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	char data[] = "123456789";

	// data + 2: "1234589" kısmı hedef
	// data: "123456789" kısmı kaynak
	ft_memmove(data + 2, data, 5);
	ft_memcpy(data + 2, data, 5);

	printf("%s\n", data);
	printf("%s\n", data);

	return 0;
}