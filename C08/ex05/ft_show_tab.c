/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:46:25 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/19 12:00:34 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void				ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putnbr(int nb)
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

void				ft_show_tab(struct s_stock_str *par)
{
	int				i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
