/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:10:35 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/17 18:43:05 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int len;
	char *dup;
	size_t i;
	
	i = 0;
	len = ft_strlen(s);
	dup = (char *) malloc(sizeof(char)*(len+1));
	if(s == NULL)
		return NULL;
	while(s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
	
	
}
int main()
{
	char s[] = " ";
	printf("%s\n", ft_strdup(s));
}