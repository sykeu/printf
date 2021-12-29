/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 03:41:08 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/12/29 03:54:02 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(unsigned int n, char *base)
{
	int	i;

	i = 0;
	if (n < 16)
		i += ft_putchar(base[n]);
	else
	{
		i += ft_convert(n / 16, base);
		i += ft_convert(n % 16, base);
	}
	return (i);
}
