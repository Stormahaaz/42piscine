/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:41:44 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/20 21:47:38 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_jump(char c, char *charset)
{
	int			j;

	j = 0;
	while (charset[j])
	{
		if (charset[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int				ft_check(char *str, char *charset)
{
	int			k;
	int			i;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && ft_jump(str[i], charset))
			i++;
		if (str[i] && !ft_jump(str[i], charset))
		{
			k++;
			while (str[i] && !ft_jump(str[i], charset))
				i++;
		}
	}
	return (k);
}

char			*ft_attribute(char *str, char *charset)
{
	char		*word;
	int			i;

	i = 0;
	while (str[i] && !ft_jump(str[i], charset))
		i++;
	if (!(word = malloc(sizeof(*word) * i + 1)))
		return (NULL);
	i = 0;
	while (str[i] && !ft_jump(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_split(char *str, char *charset)
{
	char		**split;
	int			i;
	int			j;

	j = ft_check(str, charset);
	split = NULL;
	i = 0;
	if (!(split = malloc(sizeof(char*) * j + 1)))
		return (split = NULL);
	while (*str)
	{
		while (*str && ft_jump(*str, charset))
			str++;
		if (*str && !ft_jump(*str, charset))
		{
			split[i] = ft_attribute(str, charset);
			i++;
			while (*str && !ft_jump(*str, charset))
				str++;
		}
	}
	split[i] = NULL;
	return (split);
}
