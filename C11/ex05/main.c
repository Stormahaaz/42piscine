/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 22:19:41 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/23 21:23:52 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
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

void	ft_read(int a, int b, char c, void (*f[5])(int, int))
{
	if (c == '+')
		f[0](a, b);
	else if (c == '-')
		f[1](a, b);
	else if (c == '/')
		f[2](a, b);
	else if (c == '*')
		f[3](a, b);
	else if (c == '%')
		f[4](a, b);
	else
		ft_putnbr(0);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	void	(*f[5])(int, int);

	f[0] = &ft_add;
	f[1] = &ft_minus;
	f[2] = &ft_div;
	f[3] = &ft_times;
	f[4] = &ft_mod;
	if (ac != 4)
		return (0);
	if (av[2][1] != 0 && ac == 4)
	{
		write(1, "0\n", 2);
		return (0);
	}
	ft_read(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0], f);
	return (0);
}
