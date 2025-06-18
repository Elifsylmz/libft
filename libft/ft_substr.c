/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:10:06 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/18 17:37:53 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	int s_len;
	size_t i;
	
	s_len = ft_strlen(s);
	
	if(!s)
		return NULL;
	
	if(len > s_len - start)
		len = s_len -start;
		
	if(start >= s_len)
	{
		sub = malloc(sizeof(char));
		sub[0] = '\0';
		return (sub);
	}
	sub = (char *) malloc( len + 1);
	if(!sub)
		return NULL;
	i = 0;
	while(s[i + start] && i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0'; 
	return sub;
}

// int main()
// {
// 	char s[] = "hello world";
// 	printf("%s\n", ft_substr(s, 4, 6));
// 	printf("%s\n", ft_substr(s, 3, 9));
// }