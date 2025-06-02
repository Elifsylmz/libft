/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:47:06 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/02 15:47:06 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//memset belleği istenen değerle dolduruyordu bzero ise belleği sıfırlıyormuş.
//buffer ile alakalı bir şey vardı araştır!!

void *ft_bzero(void *s, size_t n)
{
    ft_memset(s,0,n);
}

int main(){
    int s[] = {256, 7000, 3};
    size_t n = 1;
    ft_bzero(s + 1, n);
    printf("%d - %d - %d\n", s[0], s[1], s[2]);
}