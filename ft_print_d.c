/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekherbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:38:05 by mekherbo          #+#    #+#             */
/*   Updated: 2023/11/11 21:41:20 by mekherbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int nb_len(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	if (nb == 0)
		return (1);
	else
	{
		while (nb)
		{
			nb /= 10;
			count++;
		}
	}
	return (count);
}

int ft_print_int(va_list arg)
{
	int	nb;

	nb = va_arg(arg, int);
	ft_putnbr(nb);
	return (nb_len(nb));
}
