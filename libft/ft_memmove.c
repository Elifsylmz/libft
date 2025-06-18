/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:25:28 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/18 15:09:19 by eyilmaz          ###   ########.fr       */
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
	
	if(b == a || n == 0)
		return a;
	if (b > a && n--)
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


int main()
{
    char str[] = "Hello World";
	char str2[] = "Hello World";
	memmove(str2 + 4, str2 + 4, 6);
    ft_memmove(str + 4, str + 4, 6);

    printf("str: %s\n", str); 
    printf("str2: %s\n", str2); 
	
}