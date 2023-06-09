/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:13:32 by ychihab           #+#    #+#             */
/*   Updated: 2022/11/03 10:09:58 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *i)
{
	if (n > 9)
	{
		ft_putnbr_u(n / 10, i);
		ft_putnbr_u(n % 10, i);
	}
	else
		ft_putchar(n + '0', i);
}
