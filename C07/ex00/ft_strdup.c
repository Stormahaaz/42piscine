/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:57:29 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/15 20:30:19 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	char	*rtn;

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
