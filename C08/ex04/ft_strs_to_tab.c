/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 22:48:15 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/18 23:13:54 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int				i;
	char			*rtn;

	i = 0;
	while (src[i])
		i++;
	if (!(rtn = malloc((i * sizeof(*rtn) + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		rtn[i] = src[i];
		i++;
	}
	rtn[i] = 0;
	return (rtn);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	i = 0;
	if (!(tab = malloc(sizeof(*tab) * (ac + 1))))
		return (tab = NULL);
	while (i < ac)
	{
		tab[i].copy = ft_strdup(av[i]);
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
