/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:58:01 by ychihab           #+#    #+#             */
/*   Updated: 2022/11/06 17:32:52 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conditions(va_list list, char *s, int i, int *j)
{
	if (s[i] == 'c')
		ft_putchar(va_arg(list, int), j);
	else if (s[i] == 'd')
		ft_putnbr(va_arg(list, int), j);
	else if (s[i] == 'i')
		ft_putnbr(va_arg(list, int), j);
	else if (s[i] == 's')
		ft_putstr(va_arg(list, char *), j);
	else if (s[i] == 'x')
		ft_x(va_arg(list, unsigned int), j);
	else if (s[i] == 'X')
		ft_upper_x(va_arg(list, unsigned int), j);
	else if (s[i] == 'p')
		ft_address(va_arg(list, unsigned long), j);
	else if (s[i] == 'u')
		ft_putnbr_u(va_arg(list, unsigned int), j);
}
