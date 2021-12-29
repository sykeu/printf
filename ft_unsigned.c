/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 03:55:18 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/12/29 03:55:19 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_unsigned(n / 10);
		i += ft_unsigned(n % 10);
	}
	else
	{
		i += ft_putchar(n + '0');
	}
	return (i);
}
