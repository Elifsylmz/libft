/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:10:48 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/18 15:32:24 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t len)
{
	if(len == 0)
		return 0;
	while(len--)
	{
		if(*s1 != *s2)
			return(((unsigned char )*s1 ) - ((unsigned char )*s2));
		s1++;
		s2++;
	}
	return 0;
}

int main()
{
	const char s1[] = "selammmmmmmmmmmmmm";
	const char s2[] = "selammmm";

	printf("%d\n", ft_strncmp(s1, s2, 20));
}