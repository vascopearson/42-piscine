/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:56:42 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/28 19:15:03 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src, int pos, int size)
{
	char	*str;
	int		i;

	str = malloc(sizeof(str) * (size + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		str[i] = src[pos + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	test_charset(char s, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (charset[j] != '\0')
	{
		if (s == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	ft_wordlen(char *str, int pos, char *charset)
{
	int	i;

	i = 0;
	while (str[pos + i] != '\0' && test_charset(str[pos + i], charset) == 0)
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	split = malloc(sizeof (*split) * (ft_strlen(str) + 1));
	if (split == NULL)
		return (0);
	while (i < ft_strlen(str))
	{
		if (test_charset(str[i], charset) == 0)
		{
			size = ft_wordlen(str, i, charset);
			{
				split[j] = ft_strdup(str, i, size);
				i = i + size;
				j++;
			}
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
