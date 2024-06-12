/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-06 10:48:37 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-06 10:48:37 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long long int n, char c)
{
	long long int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthexa(n / 16, c);
	if (c == 'x')
		ft_putchar("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		ft_putchar("0123456789ABCDEF"[n % 16]);
	count++;
	return (count);
}

/*los numeros hexadecimales tienen base 16 no 10.
Si el numero es mayor de 16, hacemos la funcion recursiva
para separar el numero grande en numeros imprimibles en 
hexadecimal. Ya separado digito por digito
tenemos que ver si la x es mayuscula o minuscula para saber
como imprimir. 
Tenemoss que indicar en la funcion putchar la base
en la que se encuentra por eso escribimos los numeros hexadecimales*/

/* #include <stdio.h>
int main() 
{
    unsigned long long num = 0x7fffffffffffffff;
int count = ft_puthexa(num, 'x');
    printf("\nCount: %d\n", count);
    return 0; 
}*/
