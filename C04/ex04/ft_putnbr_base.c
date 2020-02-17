/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:12:16 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/16 17:29:38 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

int					ft_check(char *base)
{
	int				i;
	int				j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (i < ft_strlen(base))
	{
		j = 0;
		while (base[i + j])
		{
			if ((base[j] < '0') || (base[j] > '9' && base[j] < 'A')
					|| (base[j] > 'Z' && base[j] < 'a') || base[j] > 'z')
				return (0);
			if (base[i] == base[i + j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void				ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size_base;
	unsigned int	nb;

	if (ft_check(base) == 0)
		return ;
	size_base = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		ft_putchar('-');
	}
	else
		nb = nbr;
	if (nb >= size_base)
		ft_putnbr_base(nb / size_base, base);
	ft_putchar(base[nb % size_base]);
}
