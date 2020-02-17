/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:39:29 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/18 23:58:57 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					ft_atoi_base(char *str, char *base_from);
int					ft_scndcheck(char *str, char *base_from, int i);
int					ft_get_nb(char c, char *str);
int					ft_check_base(char *base);

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int					ft_gotit(int nbr, char *base_to)
{
	long			nb;
	int				size_nbr;

	nb = nbr;
	size_nbr = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb /= ft_strlen(base_to);
		size_nbr++;
	}
	return (size_nbr);
}

char				*ft_putnbr_base(int nbr2, char *base_to)
{
	unsigned int	size_base;
	unsigned int	nb;
	int				index;
	char			*convert;

	size_base = ft_strlen(base_to);
	if (nbr2 < 0)
		nb = nbr2 * -1;
	else
		nb = nbr2;
	index = (nbr2 < 0) ? ft_gotit(nbr2, base_to) + 1 : ft_gotit(nbr2, base_to);
	if (!(convert = malloc(sizeof(*convert) * (index + 1))))
		return (NULL);
	convert[index] = '\0';
	while (index--)
	{
		convert[index] = base_to[nb % size_base];
		if (nb < size_base)
			convert[index] = base_to[nb];
		if (nbr2 < 0 && index == 0)
			convert[index] = '-';
		nb /= size_base;
	}
	return (convert);
}

char				*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nb;

	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	if (!(nbr))
		return (NULL);
	return (ft_putnbr_base(nb, base_to));
}
