/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekherbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:18:56 by mekherbo          #+#    #+#             */
/*   Updated: 2023/11/15 02:18:38 by mekherbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>

int	ft_print_char(va_list arg);
int	ft_print_int(va_list arg);
int	ft_print_string(va_list arg);
int	ft_print_ptr(va_list arg);
int	ft_print_unsigned(va_list arg);
int	ft_print_hexa(va_list arg, char flag);
int	ft_printf(const char *format, ...);
int	ft_print_percent(void);
void	ft_putnbr(int nb);
void	ft_putnbr_base_unsigned(unsigned long long nb, char *base);
int	ft_nblen_u(unsigned int nb, int base);

#endif
