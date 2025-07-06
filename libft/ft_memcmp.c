/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:10:25 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/07/06 16:41:01 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = (const unsigned char *)b1;
	b = (const unsigned char *)b2;
	while (len--)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}

// int main()
// {
// 	const int b1[] = {1, 2, 3};
// 	const int b2[] = {1, 2, 4};

// 	printf("%d\n", ft_memcmp(b1, b2, 12));
// }