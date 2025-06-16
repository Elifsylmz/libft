/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:34 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 15:47:34 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_tolower(int a){
    if (a >= 65 && a <= 90)
        a += 32;
    return a;
}

int main(){
    char a = 'B';
    int b = 98;

    printf("%c\n", ft_tolower(a));
    printf("%c\n", ft_tolower(b));
}