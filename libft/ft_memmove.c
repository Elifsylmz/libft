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
	char *b;
	char *a;
	char temp[n];
	size_t i;
	i = 0;
	b = (char *)dest;
	a = (char *)src;
	if(b > a)
		ft_memcpy(b,a,10);
	elif(a > b)
	{
		
	}
	return(dest);
}

int main()
{
	char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
	
	memmove(second + 5, first, 10);
    printf("memmove overlap : %s\n ", str);
	
	// char dest[5] = "forw";
    // ft_memmove(dest + 2, "elifsema", ft_strlen(dest) + 8);
    // // printf("%s\n", dest);
    // return 0;

	
	// int dest[10];
	// const int src[] = {3, 5, 2, 4};
	// ft_memmove(dest,src,1);
	// printf("%d\n", dest[0]);
	// printf("%d\n", dest[1]);
	// printf("%d\n", dest[2]);
	// printf("%d\n", dest[3]);
}