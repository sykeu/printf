/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 03:54:51 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/12/29 05:20:59 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr(int nbr);
int	ft_pointeur(unsigned long p);
int	ft_unsigned(unsigned int n);
int	ft_printf(const char *s, ...);
int	ft_convert(unsigned int n, char *base);

#endif
