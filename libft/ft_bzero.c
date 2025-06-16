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

int main()
{
    int a[] = {2, 3, 20};
    ft_bzero(a, 10);
    printf("%d", a[0]);
    printf("%d", a[1]);
    printf("%d", a[2]);
}
