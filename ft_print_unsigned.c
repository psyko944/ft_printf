/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekherbo <mekherbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 01:08:16 by mekherbo          #+#    #+#             */
/*   Updated: 2023/11/13 01:11:49 by mekherbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_unsigned(va_list arg)
{
	unsigned long	u_nb;

	u_nb = va_arg(arg, unsigned long);
	ft_putnbr_base_(nb);
}
