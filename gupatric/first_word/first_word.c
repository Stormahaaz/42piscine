/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 10:57:32 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 11:07:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_first_word(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str && *str != ' ' && *str != '\t')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_print_first_word(av[1]);
	return (0);
}
