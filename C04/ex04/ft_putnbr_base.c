/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_MAYBE.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:04:50 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/25 15:19:17 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strlen(char *str);

int		base_is_valid(char *base, int base_length);

void	ft_putnbr_base(int nbr, char *base)
{
	long	divv;
	long	result;
	long	num;
	int		base_len;

	num = nbr;
	base_len = ft_strlen(base);
	if (base_is_valid(base, base_len) == 0)
		return ;
	if (num < 0)
	{
		ft_putchar('-');
		num = -(num);
	}
	divv = 1;
	while ((num / divv) >= base_len)
	{
		divv *= base_len;
	}
	while (divv > 0)
	{
		result = (num / divv) % base_len;
		ft_putchar(base[result]);
		divv /= base_len;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0 )
	{
		length++;
	}
	return (length);
}

int	base_is_valid(char *base, int base_length)
{
	int	i;
	int	j;

	if (base_length <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
