/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekherbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:18:56 by mekherbo          #+#    #+#             */
/*   Updated: 2023/11/11 21:41:27 by mekherbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>

int	ft_print_char(va_list arg);
int	ft_print_int(va_list arg);
int	ft_print_string(va_list arg);
int	ft_print_ptr(va_list arg);
int	ft_print_unsigned(va_list arg);
int	ft_print_hexa(va_list arg);
