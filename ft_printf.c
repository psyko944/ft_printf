/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekherbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:30:40 by mekherbo          #+#    #+#             */
/*   Updated: 2023/11/15 02:23:44 by mekherbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_parse(char flag, va_list arg)
{
	int	res;

	res = -1;
	if (flag == 'c')
		res = ft_print_char(arg);
	else if (flag == 'd' || flag == 'i')
		res = ft_print_int(arg);
	else if (flag == 's')
		res = ft_print_string(arg);
	else if (flag == 'p')
		res = ft_print_ptr(arg);
	else if (flag == 'u')
		res = ft_print_unsigned(arg);
	else if (flag == 'x' || 'X')
		res = ft_print_hexa(arg, flag);
	else if (flag == '%')
		res = ft_print_percent();
	else 
		res = -1;
	va_end(arg);
	return (res);
}

int ft_printf(const char *format, ...)
{
	int	res;
	int	i;
	va_list	arg;

	res = 0;
	i = -1;
	va_start(arg, format);
	while (format[++i])
	{
		if (format[i] == '%')
			res += ft_parse(format[i + 1], arg);
		else
		{
			write(1, &format[i], 1);
			res += 1;
		}
	}
	return (res);
}

