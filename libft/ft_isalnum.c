/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:17 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 15:47:17 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_isalnum(int a)
{
    if(ft_isdigit(a) || ft_isalpha(a))
        return(1);
    return(0);
}

// int main()
// {
//     int a = 7;
//     int b = 84;
//     char c = 'f';
//     char d = '8';
//     unsigned int e = 435;

//     if (ft_isalnum(a) == 1)
//         printf("'%d' alphanumeric bi karakter.\n", a);
//     else
//     printf("'%d' alphanumeric bi karakter değil.\n", a);

//     if (ft_isalnum(b) == 1)
//         printf("'%d' alphanumeric bi karakter.\n", b);
//     else
//     printf("'%d' alphanumeric bi karakter değil.\n", b);

//     if (ft_isalnum(c) == 1)
//         printf("'%c' alphanumeric bi karakter.\n", c);
//     else
//     printf("'%c' alphanumeric bi karakter değil.\n", c);

//     if (ft_isalnum(d) == 1)
//         printf("'%c' alphanumeric bi karakter.\n", d);
//     else
//     printf("'%c' alphanumeric bi karakter değil.\n", d);

//     if (ft_isalnum(e) == 1)
//         printf("'%d' alphanumeric bi karakter.\n", e);
//     else
//     printf("'%d' alphanumeric bi karakter değil.\n", e);

// }