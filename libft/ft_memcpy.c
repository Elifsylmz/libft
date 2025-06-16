/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:35:07 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/04 15:18:50 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	size_t i;
	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	while(i < n)
	{
		b[i] = a[i];
		i++;
	}
	return(dest);
}

// int main()
// {
//     char src[] = "Merhaba Dünya!";
//     char dest[20];  // Yeterli büyüklükte buffer ayır

//     // ft_memcpy ile kopyalama
//     ft_memcpy(dest, src, 15);  // sizeof(src) hem karakterleri hem null sonlandırıcıyı kopyalar

//     printf("Kaynak: %s\n", src);
//     printf("Hedef  : %s\n", dest);

//     return 0;
// }

// int main()
// {
// 	int dest[] = {5,3,5};
// 	const int src[] = {255, 5, 6};
// 	ft_memcpy(dest,src,2);
// 	printf("%d\n", dest[0]);
	
// 	// char dest[] = "jka";
// 	// ft_memcpy(dest, "csgsdg", 3);
// 	// printf("%s\n", dest);

// }