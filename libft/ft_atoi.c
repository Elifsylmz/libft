/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:10:06 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/06/17 17:10:07 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int sign;
    int say;

    say = 0;
    sign = 1;

    while((*nptr >= 9 && *nptr <=13) || *nptr == 32 )
        nptr++;

    if(*nptr == '-' || *nptr == '+')
    {
        if(*nptr == '-')
           sign = -1;
        nptr++;
    }

    while(*nptr >= '0' && *nptr <= '9')
    {
        say = say * 10 + (*nptr - '0');
        nptr++;
    }
    return sign * say;
}

int main() {
    printf("%d\n", ft_atoi("   -123abc"));  // -123
    printf("%d\n", ft_atoi("42"));          // 42
    printf("%d\n", ft_atoi("   +77hello")); // 77
    printf("%d\n", ft_atoi("abc123"));      // 0
    return 0;
}