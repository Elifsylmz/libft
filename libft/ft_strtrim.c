/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 17:38:36 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/18 17:45:19 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	if(!s1 || !set)
		return NULL;
	j = ft_strlen(s1);
	while(ft_strchr(set, s1[i]))
		i++;
	while(ft_strchr(set, s1[j]))
		j--;
	return(ft_substr(s1, i, j - i + 1));
}

int main()
{
	char s[] = "aaaelfbbbbb";
	char set[] = "ab";
	printf("%s\n", ft_strtrim(s, NULL));
}