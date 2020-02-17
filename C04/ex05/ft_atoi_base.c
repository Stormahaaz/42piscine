/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 00:11:48 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/11 18:49:29 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_check(char *base)
{
	int			i;
	int			j;

	i = 0;
	while (base[i])
	{
		j = 1;
		while (base[i + j])
		{
			if (base[j] == '\t' || base[j] == '\n' || base[j] == '\f' ||
				base[j] == '\v' || base[j] == '\r' || base[j] == ' ' ||
				base[j] == '+' || base[j] == '-')
				return (0);
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int				ft_getnb(char c, char *str)
{
	int			i;

	i = 0;
	while (str[i] && c != str[i])
	{
		i++;
	}
	if (str[i] == c)
		return (i);
	else
		return (-1);
}

int				ft_scndcheck(char *str, char *base, int i)
{
	int			nb;

	nb = 0;
	while (str[i])
	{
		if (ft_getnb(str[i], base) == -1)
			return (nb);
		nb = (nb * ft_check(base)) + (ft_getnb(str[i], base));
		i++;
	}
	return (nb);
}

int				ft_atoi_base(char *str, char *base)
{
	int			nb;
	int			sign;
	int			i;

	i = 0;
	sign = 1;
	if (!(ft_check(base)))
		return (0);
	while (str[i] == '\t' || str[i] == '\f' || str[i] == '\n' || str[i] == 32 ||
			str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	nb = ft_scndcheck(str, base, i);
	return (nb * sign);
}
