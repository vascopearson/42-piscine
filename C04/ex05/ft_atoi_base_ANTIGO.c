/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:44:00 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/25 11:32:40 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	base_length(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[j] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i = j + 1;
		while (base[i] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			i++;
		}
		j++;
	}
	if (j < 2)
		return (0);
	return (j);
}

int check_errors(char *str, char *base)
{
    int i;
    int j;
    int start;

    start = 0;
    while (str[start] != '\0' && (str[start] == ' ' || (str[start] >= 9 &&
        str[start] <= 13)))
        start++;
    i = start;
    while (str[i])
    {
        j = 0;
        while (base[j] && str[i] != base[j])
            ++j;
        if (str[i] != base[j])
            return (0);
        i++;
    }
    if (i == 0)
        return (0);
    return (1);
}

int		get_nbr(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	bl;
	int	num;

	i = 0;
	sign = 1;
	bl = base_length(base);
	num = 0;
	if (bl == 0 || check_errors(str, base) == 0)
		return (0);
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= - 1;
		}
		i++;
	}
	while (str[i] != '\0' && (str[i] != '-' || str[i] != '+'))
	{
		num = (num * bl) + (get_nbr(str[i], base));
		i++;
	}
	return (sign * num);
}
