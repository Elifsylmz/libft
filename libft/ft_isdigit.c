/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:28 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 15:47:28 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int a)
{

	if (a >= '0' && a <= '9')
		return 1;
	else
		return 0;
}

// int main(){
// 	char deneme = 'a';
// 	int den2 = 3;
// 	int den3 = 255;
// 	int den4 = 0;
// 	char den5 = '5';


// 	printf("%d\n", ft_isdigit(deneme));
// 	printf("%d\n", ft_isdigit(den2));
// 	printf("%d\n", ft_isdigit(den3));
// 	printf("%d\n", ft_isdigit(den4));
// 	printf("%d\n", ft_isdigit(den5));
// }