/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:10:32 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/18 17:24:45 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == c)
			return(char *)s;
		s++;
	}

	if(c == '\0')
		return (char *)s;

	else
	return NULL;
}

// int main()
// {
// 	const char s[] = "elif sema";
// 	char c = '\0';

// 	printf("%s\n", ft_strchr(s, c));
// }