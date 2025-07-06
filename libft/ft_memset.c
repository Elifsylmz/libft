/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:12 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 15:47:12 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int ch, size_t n)
{
	unsigned char *b;
	size_t a = 0;
	b = (unsigned char *)str;
	while (a < n)
	{
		b[a] = ch;
		a++;
	}
	return (str);
}

// int main()
// {
// 	int a[] = {5, 2, 4};
// 	ft_memset(a, 255, 1);
// 	ft_memset(a, 8, 1);
// 	printf("%d\n", a[0]);
// }


// 2147483647 - 2147483648 = -1

// 2147483647 + 2147483414



// int main() {

//     int dizi[10];
//     ft_memset(dizi, 'A', 5);
//     int i = 0;
//     while(dizi[i] != '\0'){
//         printf("%c\n", dizi[i]);
//         i++;
//     }

// }
