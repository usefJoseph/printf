/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:25:53 by ychihab           #+#    #+#             */
/*   Updated: 2022/11/06 17:34:10 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start (list, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '%')
				ft_putchar(s[i], &j);
			else
				ft_conditions(list, (char *)s, i, &j);
		}
		else
			ft_putchar(s[i], &j);
		i++;
	}
	va_end (list);
	return (j);
}
