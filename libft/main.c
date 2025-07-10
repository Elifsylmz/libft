#include "libft.h"

int main(void)
{
	char *s1 = ft_itoa(0);
	char *s2 = ft_itoa(1234);
	char *s3 = ft_itoa(-56789);
	char *s4 = ft_itoa(-2147483648);

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("s3 = %s\n", s3);
	printf("s4 = %s\n", s4);

	// Bellek serbest bırakılıyor
	free(s1);
	free(s2);
	free(s3);
	free(s4);

	// Eğer şimdi printf(s1); dersen tanımsız davranış olur ❌

	return 0;
}