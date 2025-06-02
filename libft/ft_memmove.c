/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:03 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 20:03:42 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *b;
	char *a;
	char temp[n];
	size_t i;
	i = 0;
	b = (char *)dest;
	a = (char *)src;
	while(b[i] || a[i])
	{
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
		i++;
	}
	return(dest);
}

int main()
{
	int dest[10];
	const int src[] = {3, 5, 2, 4};
	ft_memmove(dest,src,1);
	printf("%d\n", dest[0]);
	printf("%d\n", dest[1]);
	printf("%d\n", dest[2]);
	printf("%d\n", dest[3]);

}