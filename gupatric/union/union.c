/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:18:52 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 12:45:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

void	ft_union(char *str)
{
	int	tmp;
	int	i;

	i = 0;
	while (str[i])
	{
		tmp = i;
		while (tmp >= 0)
		{
			if (str[i] == str[tmp - 1])
				break;
			tmp--;
		}
		if (tmp <= 0)
			write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union(ft_strcat(av[1], av[2]));
	write(1, "\n", 1);
	return (0);
}
