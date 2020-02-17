/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:58:46 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/12 14:42:59 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int div;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	div = 2;
	while (div <= (nb / div))
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (!(ft_is_prime(nb)))
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
