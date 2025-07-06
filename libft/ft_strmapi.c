/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:40:34 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/07/06 22:06:25 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t len;
	size_t i;
	char *result;
	
	if (!s || !f)
	return (NULL);

	i = 0;
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
		
	while(s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
		return result;
}
char to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main()
{
	char *s = "elifsema";
	char *new_str = ft_strmapi(s, to_upper);
	
	printf("%s\n", new_str);
}
