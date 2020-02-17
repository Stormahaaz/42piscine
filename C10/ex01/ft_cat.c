/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:52:36 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/25 17:47:19 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void		ft_putstrerror(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void		ft_cat(char **av)
{
	char	buf;
	int		fd;

	av++;
	while (*av)
	{
		fd = open(*av, O_RDWR);
		if (fd >= 0)
		{
			while (read(fd, &buf, 1) != 0)
				write(1, &buf, 1);
		}
		else
		{
			ft_putstrerror("ft_cat: ");
			ft_putstrerror(*av);
			ft_putstrerror(": ");
			if (errno)
				ft_putstrerror(strerror(errno));
			ft_putstrerror("\n");
		}
		close(fd);
		av++;
	}
}

void		ft_input(void)
{
	char	c;

	while (read(0, &c, 1) != 0)
		write(1, &c, 1);
}

int			main(int ac, char **av)
{
	if (ac == 1 || av[1][0] == '-')
		ft_input();
	else
		ft_cat(av);
	return (0);
}
