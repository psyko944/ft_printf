/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekherbo <mekherbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:29:17 by mekherbo          #+#    #+#             */
/*   Updated: 2023/11/15 17:43:50 by mekherbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	ft_print_string(va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (sizeof(char) * 6);
	}
	ft_putstr(str);
	return (ft_strlen(str));	
}
