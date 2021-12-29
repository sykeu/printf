/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeur.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 03:55:44 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/12/29 05:25:44 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointeur(unsigned long p)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	if (p >= 16)
	{
		i += ft_pointeur(p / 16);
		i += ft_pointeur(p % 16);
	}
	else if (p < 16)
	{
		i += ft_putchar(hex[p]);
	}
	return (i);
}
