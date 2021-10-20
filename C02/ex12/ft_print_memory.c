/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:31:51 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/15 18:37:46 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexadec(unsigned int n, int recursive)
{
	char	digit;

	if (n < 16 && !recursive)
	{
		write(1, "0", 1);
	}
	if (n > 16)
	{
		ft_hexadec(n / 16, 1);
		n = n % 16;
	}
	if (n < 16)
	{
		if (n > 9)
		{
			digit = 'a' + n - 10;
		}
		if (n < 10)
		{
			digit = '0' + n;
		}
	}
	write(1, &digit, 1);
}

int	ft_print_hexa(char *addr_char, int i)
{
	int	line_size;

	line_size = 8;
	i = 0;
	while (line_size > 0 && addr_char[i] != '\0')
	{
		ft_hexadec(addr_char[i], 0);
		ft_hexadec(addr_char[i + 1], 0);
		write(1, " ", 1);
		line_size--;
		i = i + 2;
	}
	return (i);
}

void	ft_printzeros(unsigned int addr_int)
{
	int	zeros;

	zeros = 16;
	while (addr_int > 0)
	{
		addr_int = addr_int / 16;
		zeros--;
	}
	while (zeros > 0)
	{
		write(1, "0", 1);
		zeros--;
	}
}	

void	ft_print_str(void *addr)
{
	int		i;
	char	*addr_char;

	addr_char = (char *)addr;
	i = 0;
	while (addr_char[i] && i < 16)
	{
		if (addr_char[i] < 32 || addr_char[i] > 126)
		{
			write(1, ".", 1);
		}
		else
			write(1, &addr_char[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	addr_int;
	char			*addr_char;
	unsigned int	i;

	if (size == 0)
	{
		return (addr);
	}
	i = 0;
	addr_int = (unsigned int)addr;
	addr_char = (char *)addr;
	while (addr_char[i])
	{
		addr_int = (unsigned int)addr;
		addr_char = (char *)addr;
		ft_printzeros(addr_int);
		ft_hexadec(addr_int, 0);
		write(1, ": ", 2);
		i = ft_print_hexa(addr_char, i);
		ft_print_str(addr);
		write(1, "\n", 1);
		addr = addr + 16;
	}
	return (addr);
}
