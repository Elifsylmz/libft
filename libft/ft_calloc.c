/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:09:58 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/17 18:23:54 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	
	if(nmemb == 0 || size == 0)
		return NULL;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return NULL;
	ft_bzero(ptr, nmemb*size);
	return ptr;
}

int main()
{
	int *ptr = ft_calloc(5,4);
	printf("%d\n",ptr[0]);
}