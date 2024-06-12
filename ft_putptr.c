/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-06 14:50:22 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-06 14:50:22 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	c;

	c = 0;
	if (!ptr)
	{
		return (ft_putstr("(nil)"));
	}
	c += ft_putstr("0x");
	c += ft_puthexa(ptr, 'x');
	return (c);
}
/*si es un puntero te escribirá el contenido del puntero
y la direccion de memoria donde apunta.
0x y x debes ponerlo para 
EJ: un puntero con el valor 12345 en decimal (0x3039 en hexadecimal).

ft_putstr("0x") imprimirá "0x" y devolverá 2.
ft_puthexa(12345, 'x') imprimirá "3039" y devolverá 4.
Entonces, ft_print(12345) imprimirá "0x3039" y devolverá 6,
que es el total de caracteres impresos.*/