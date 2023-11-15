/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekherbo <mekherbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 01:08:16 by mekherbo          #+#    #+#             */
/*   Updated: 2023/11/15 18:42:28 by mekherbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_unsigned(va_list arg)
{
	unsigned long	u_nb;

	u_nb = va_arg(arg, unsigned long);
	ft_putnbr_base_unsigned((unsigned long long)u_nb, "0123456789");
	return (ft_nblen_u(u_nb, 10));
}
