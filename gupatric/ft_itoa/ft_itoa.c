/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:49:07 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 14:15:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	int				count;
	int				cpy;
	char			*str;
	unsigned int	nb;


	str = NULL;
	cpy = nbr;
	count = 0;
	if (cpy == 0)
	{
		if (!(str = malloc(2)))
			return (0);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (cpy != 0)
	{
		cpy /= 10;
		count++;
	}
	if (nbr < 0)
	{
		count++;
		nb = -nbr;
		if (!(str = malloc((sizeof(*str) * count))))
			return (NULL);
		str[count] = '\0';
	}
	if (nbr >= 0)
	{
		if (!(str = malloc(sizeof(*str) * count)))
			return (NULL);
		str[count] = '\0';
		nb = nbr;
	}
	while (count > 0)
	{
		count--;
		if (nb != 0)
			str[count] = (nb % 10) + '0';
		if (count == 0 && nbr < 0)
			str[count] = '-';
		nb /= 10;
	}
	return (str);
}
