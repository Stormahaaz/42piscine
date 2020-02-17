/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:22:44 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/11 20:49:43 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int nbr;

	nbr = nb;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
		nbr = nbr * ((nb--) - 1);
	return (nbr);
}
