/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:42:51 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/25 13:41:11 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_convert_base(unsigned char c)
{
	const char	hexa[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd',
		'e', 'f'
	};

	if (c >= 16)
		ft_convert_base(c / 16);
	ft_putchar(hexa[c % 16]);
}

void		ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] > 127)
		{
			write(1, "\\", 1);
			if ((unsigned char)str[i] < 16)
				write(1, "0", 1);
			ft_convert_base(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
