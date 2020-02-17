/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 10:48:31 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 10:53:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		ft_putstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
