/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyilmaz <eyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:40:57 by eyilmaz           #+#    #+#             */
/*   Updated: 2025/07/06 18:44:28 by eyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_len(long nb)
{
	int	len;

	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		len++;
		nb = nb * -1;
	}
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*numb(long nb, char *newn, int lencont, int len)
{
	if (nb == 0)
	{
		newn[0] = '0';
		newn[1] = '\0';
		return (newn);
	}
	if (nb < 0)
	{
		newn[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		newn[--len] = '0' + (nb % 10);
		nb = nb / 10;
	}
	newn[lencont] = '\0';
	return (newn);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*newn;
	int		lencont;

	nb = n;
	len = number_len(nb);
	lencont = len;
	newn = malloc(sizeof(char) * (len + 1));
	if (!newn)
		return (NULL);
	numb(nb, newn, lencont, len);
	return (newn);
}
