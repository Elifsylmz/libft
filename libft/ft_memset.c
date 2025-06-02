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

//it is used to set a one-byte value to a memory block byte by byte.
//void *str --> it is the pointer of the memory location where the memory will be set.
//int ch --> it is the value that is to be copied to the memory block.
// size_t n --> it is the number of bytes in the memory block which is set.
// memset() returns the first address of the memory block from where it starts to set the value.

void *ft_memset(void *str, int ch, size_t n)
{
	char *b;
	size_t a = 0;
	b = (char *)str;
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
// 	ft_memset(a, 8, 1);
// 	printf("%d\n", a[0]);
// }

// 2147483647 - 2147483648 = -1

// 2147483647 + 2147483414
