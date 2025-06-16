/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:36 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 15:47:36 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int a){
    if (a >= 97 && a <= 122)
        a = a - 32;
    return a;
}

int main(){
    char b = 'v';
    int a = 99;

    printf("%c\n", ft_toupper(b));
    printf("%c\n", ft_toupper(a));

}