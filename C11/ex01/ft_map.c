/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:07:06 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/22 21:07:20 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*rtn;
	int	i;

	i = 0;
	if (!(rtn = malloc(sizeof(*rtn) * length)))
		return (0);
	while (i < length)
	{
		rtn[i] = f(tab[i]);
		i++;
	}
	return (rtn);
}
