/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:25:44 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/23 16:34:31 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_div(int a, int b)
{
	if (b != 0)
		ft_putnbr(a / b);
	else
		write(1, "Stop : division by zero", 23);
}

void	ft_times(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_mod(int a, int b)
{
	if (b != 0)
		ft_putnbr(a % b);
	else
		write(1, "Stop : modulo by zero", 21);
}
