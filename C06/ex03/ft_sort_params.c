/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:52:56 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/16 14:24:59 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (++i < size)
	{
		j = 0;
		while (++j < size)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}
}

int			main(int ac, char **av)
{
	int	i;

	i = 1;
	sort_int_tab(av, ac - 1);
	if (ac != 1)
	{
		while (i < ac)
		{
			while (*av[i])
				write(1, av[i]++, 1);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
