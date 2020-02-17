/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:14:16 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/10 15:14:20 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	sign;

	if (nb < 0)
	{
		sign = nb * -1;
		ft_putchar('-');
	}
	else
		sign = nb;
	if (sign > 9)
		ft_putnbr(sign / 10);
	ft_putchar(sign % 10 + '0');
}
