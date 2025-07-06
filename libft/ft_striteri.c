/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:40:29 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/07/06 22:07:07 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t i;

	i = 0;
	while(s[i])
	{
		s[i] = f(i, s[i]);
		s++;
	}
}

char *to_upper(unsigned int i, char)
{
	(void)i;
	char a;

	a = char;
	if (a >= 97 && a <= 122)
		a = a - 32;
	return (a);
}