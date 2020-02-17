/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roll.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:59:53 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/25 11:18:57 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_display_file(int fd)
{
	int		i;
	int		ret;
	char	buf[21];

	i = 1;
	while ((ret = read(fd, buf, 20)) > 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	buf[ret] = '\0';
}

int		main(int ac, char **av)
{
	int	fd;

	fd = open(av[1], O_RDONLY);
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	else if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}
