/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:22:44 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 16:27:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_jump(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int	words;
	int	index;

	index = 0;
	words = 0;
	while (str[index])
	{
		while (ft_jump(str[index]) && str[index])
			index++;
		if (!(ft_jump(str[index])) && str[index])
		{
			words++;
			while (!(ft_jump(str[index])) && str[index])
				index++;
		}
	}
	return (words);
}

char	*ft_build(char *str)
{
	int		i;
	char	*word;

	word = NULL;
	i = 0;
	while (!(ft_jump(str[i])) && str[i])
		i++;
	if (!(word = malloc((sizeof(*word) * i + 1))))
		return (0);
	i = 0;
	while (!(ft_jump(str[i])) && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
	char	**split;
	int		i;

	i = 0;
	if (!(split = malloc(sizeof(char **) * (ft_count_words(str) + 50))))
		return (NULL);
	while (*str)
	{
		while (ft_jump(*str) && *str)
			str++;
		if (!(ft_jump(*str)) && *str)
		{
			split[i] = ft_build(str);
			while (!(ft_jump(*str)) && *str)
				str++;
		}
		i++;
	}
	split[i] = NULL;
	return (split);
}
