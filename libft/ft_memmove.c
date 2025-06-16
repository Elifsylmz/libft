/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:25:28 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/04 15:09:16 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>

void 	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	size_t i;
	i = n;
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	if (b > a)
	{
		while(i-- > 0)
		{
			b[i] = a[i];
		}
	}
	else
	{
		ft_memcpy(b,a,n);
	}
	return(dest);
}

// int main() {
//     char str1[] = "1234567890";
//     char str2[] = "1234567890";

//     printf("Orijinal str1: %s\n", str1);
//     printf("Orijinal str2: %s\n\n", str2);

//     // memcpy ile bellek çakışması (overlap) durumu
//     ft_memcpy(str1 + 2, str1, 5);
//     printf("ft_memcpy sonrası str1: %s\n", str1);

//     // memmove ile aynı işlem, overlap'a güvenli
//     ft_memmove(str2 + 2, str2, 5);
//     printf("ft_memmove sonrası str2: %s\n", str2);

}


// int main()
// {
//     char str[] = "Hello World";

//     ft_memmove(str + 0, str + 6, 5);

//     printf("%s\n", str); 
// }

// int main()
// {
// 	char str[100] = "Learningisfun";
//     char *first, *second;
//     first = str;
//     second = str;
	
// 	memmove(second + 5, first, 10);
//     printf("memmove overlap : %s\n ", str);
	
// 	// char dest[5] = "forw";
//     // ft_memmove(dest + 2, "elifsema", ft_strlen(dest) + 8);
//     // // printf("%s\n", dest);
//     // return 0;

	
// 	// int dest[10];
// 	// const int src[] = {3, 5, 2, 4};
// 	// ft_memmove(dest,src,1);
// 	// printf("%d\n", dest[0]);
// 	// printf("%d\n", dest[1]);
// 	// printf("%d\n", dest[2]);
// 	// printf("%d\n", dest[3]);
// }
