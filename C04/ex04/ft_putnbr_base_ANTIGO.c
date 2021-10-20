/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:02:43 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/25 10:04:40 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_error1(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}	
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int	check_error2(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[j] != '\0')
	{
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
	return (1);
}

void	write_num(int nbr, char *base, int size_base)
{
	if (nbr / size_base == 0)
		write(1, &base[nbr % size_base], 1);
	else
	{
		write_num(nbr / size_base, base, size_base);
		write(1, &base[nbr % size_base], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	size_base = 0;
	if (check_error1(base) == 1 && check_error2(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		while (base[size_base] != '\0')
			size_base++;
		write_num(nbr, base, size_base);
	}
}
