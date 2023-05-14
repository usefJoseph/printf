/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:26:09 by ychihab           #+#    #+#             */
/*   Updated: 2022/11/06 17:33:44 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c, int *i);
void	ft_putnbr(long n, int *i);
void	ft_putstr(char *s, int *j);
void	ft_x(unsigned int n, int *j);
void	ft_upper_x(unsigned int n, int *j);
void	ft_address(unsigned long n, int *j);
void	ft_putnbr_u(unsigned int n, int *i);
int		ft_printf(const char *s, ...);
void	ft_conditions(va_list p, char *s, int i, int *j);

#endif
