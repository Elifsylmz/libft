/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:10:52 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/18 15:32:15 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t j;
	size_t i;

	i = 0;

	if(!*little)
		return((char *)big);

	while(big[i] && i < len)
	{
		j = 0;
		if(big[i] == little[j])
		{
			while(little[j] && 
				i + j < len && 
				big[i + j] && 
				big[i + j] == little[j])

				j++;  
		}

		if(!little[j])
			return(char *)(big + i);

		i++;
	}

	return 0;
}

int main(void)
{
	const char *big = "merhaba elif sema yılmaz";
	const char *little = "elif";

	char *result = ft_strnstr(big, little, 20);

	if (result)
		printf("Bulundu: %s\n", result);
	else
		printf("Bulunamadı\n");

	return 0;
}