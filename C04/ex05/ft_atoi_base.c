/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_MAYBE.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:33:56 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/25 15:09:08 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_base(char ch, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if (ch == base[count])
			return (count);
		count++;
	}
	return (-1);
}

int	ft_base_length(char *base)
{
	int	length;

	length = 0;
	while (base[length] != '\0')
	{
		length++;
	}
	return (length);
}

int	ft_check_base(char *base)
{
	int	count;
	int	i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		count = i + 1;
		while (base[count] != '\0')
		{
			if (base[i] == base[count]
				|| (base[count] == '-' || base[count] == '+'))
				return (0);
			count++;
		}
		i++;
	}
	return (1);
}

int	ft_num_dec(char *str, int number, int base_len, char *base)
{
	while (*str != '\0' && ft_find_base(*str, base) != -1)
	{
		number *= base_len;
		if (ft_find_base(*str, base) == -1)
			return (0);
		number += (ft_find_base(*str, base));
		str++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	base_len;
	int	neg;

	neg = 1;
	if (!ft_check_base(base))
		return (0);
	while (*str != '\0' && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str != '\0' && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	base_len = ft_base_length(base);
	number = 0;
	number = ft_num_dec(str, number, base_len, base);
	return (number * neg);
}
