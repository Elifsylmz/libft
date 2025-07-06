/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:57:22 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/07/06 22:44:27 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main()
{

	// fatih elif baris ali veli
	// **
	// *   *    *    *     *

	char *str = " a b c d ";
	int i = 0;
	char **res = ft_split(str, ' ');
	while (res[i])
	{
		printf("%s\n", res[i]);
		res++;
	}
	i = 0;
	while (res[i])
	{
		free(res[i]);
	}
	
}