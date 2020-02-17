/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 00:06:03 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/08 15:48:42 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_letterornot(char *str, int i)
{
	if ((str[i] >= 'A' && str[i] <= 'Z') &&
		((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
		(str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
		(str[i - 1] >= '0' && str[i - 1] <= '9')))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i - 1] >= 0 &&
			str[i - 1] <= ' ') || str[i - 1] == '\0' || str[i - 1] < 'a' ||
				str[i - 1] > 'z'))
			str[i] -= 32;
		if (!(ft_letterornot(str, i)))
			str[i] += 32;
		i++;
	}
	return (str);
}
