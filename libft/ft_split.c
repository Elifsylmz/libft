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
	int flag;
	
	flag = 0;
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
	
	j = 0;
	i = 0;
	result = malloc(sizeof(char *) * word(s,c) + 1);

	while(*s)
	{
		while(s[i] == c)
			i++;
		if(s[i] != c)
			start = i;
		while(s[i] != c)
			i++;
		result[j] = ft_substr(s,start,i-start);
		j++;
	}
	return(result);
}

int main()
{
	printf("%s\n", ft_split("   elf beb seb  ", ' '));
	//kelime sayısı
	//iki boyutlu için alan
	//tek boyut için alan -- substr kullanılabilir.
	//substrye gönderilcek aralık
}
