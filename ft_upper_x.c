/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:01:47 by ychihab           #+#    #+#             */
/*   Updated: 2022/11/03 10:32:41 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_upper_x(unsigned int n, int *j)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_upper_x(n / 16, j);
		ft_upper_x(n % 16, j);
	}
	else
		ft_putchar(s[n], j);
}
