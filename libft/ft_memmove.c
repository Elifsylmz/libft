/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:03 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 17:59:35 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *b;
	char *a;
	char *temp;
	size_t i;
	i = 0;
	b = (char *)dest;
	a = (char *)src;
	while(b[i])
	{
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
		i++;
	}
	printf("%d\n", b[0]);
	return(dest);
}

int main()
{
	int dest[10];
	const int src[] = {3, 5, 6};
	ft_memmove(dest,src,2);
	printf("%d\n", dest[0]);
}