/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 18:59:48 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/23 21:36:03 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = -1;
	while (++i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			while (f(tab[i], tab[i + 1]) >= 0 && i < length - 1)
				i++;
			if (i < length - 1)
				return (0);
			else
				return (1);
		}
		if (f(tab[i], tab[i + 1]) < 0)
		{
			while (f(tab[i], tab[i + 1]) <= 0 && i < length - 1)
				i++;
			if (i < length - 1)
				return (0);
			else
				return (1);
		}
	}
	return (1);
}
