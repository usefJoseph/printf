/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:22:11 by ychihab           #+#    #+#             */
/*   Updated: 2022/11/03 10:33:52 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p(unsigned long n, int *j)
{
	int		i;
	char	*s;

	i = 0;
	s = "0123456789abcdef";
	if (n >= 16)
	{
		ft_p(n / 16, j);
		ft_p(n % 16, j);
	}
	if (n >= 0 && n <= 15)
		ft_putchar(s[n], j);
}

void	ft_address(unsigned long n, int *j)
{
	write(1, "0x", 2);
	*j = *j + 2;
	ft_p(n, j);
}
