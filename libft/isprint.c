/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:25 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 15:47:25 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint(int a){
    if(a >= 32 && a <= 126 )
        return 1;
    return 0;
}

int main(){

    char a = 'a';
    int b = 2;
    char c = ' ';

    printf("%d\n", ft_isprint(a));
    printf("%d\n", ft_isprint(b));
    printf("%d\n", ft_isprint(c));



}