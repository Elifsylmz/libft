/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:56:40 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/25 19:15:46 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	word(char const *s, char c)
{
	int count;

	count = 0;
	while(*s)
	{
		while(*s == c)
			s++;
		if(*s != c && *s)
			count++;
		while(*s != c && *s)
			s++;
	}
	return(count);
}
char	**ft_split(char const *s, char c)
{
	char	**result;
	int j;
	int i;
	int start;

	if(s == NULL)
		return NULL;
	
	j = 0;
	i = 0;
	result = malloc(sizeof(char *) * (word(s,c) + 1));
	if(!result)
		return NULL;

	while(s[i])
	{
		while(s[i] == c)
			i++;
		if(s[i])
		{
			start = i;
			while(s[i] && s[i] != c)
				i++;
		result[j] = ft_substr(s,start,i-start);
			j++;
		}
	}
	result[j] = NULL;
	return(result);
}

int main()
{
	char **result = ft_split(" aabena aaelsea aaaifa  ", 'a');
	int i;

	i = 0;
	while(result[i])
	{
		printf("result[%d] = %s\n", i, result[i]);
		i++;
	}
	free(result);
}
