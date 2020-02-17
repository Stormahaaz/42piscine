/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 10:18:24 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 10:34:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			write(1, "fizz\n", 5);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		if (i % 5 == 0)
			write(1, "buzz\n", 5);
		if (i % 5 != 0 && i % 3 != 0)
		{
			ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}
