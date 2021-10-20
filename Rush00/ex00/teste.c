/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:33:42 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/16 13:40:50 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void write_line(int	x, char c1, char c2, char c3)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(c1);
		}
		else if (i == x)
		{
			ft_putchar(c3);
		}
		else
			ft_putchar(c2);
		i++;
	}
	ft_putchar('\n');
}

void rush(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
		{
			write_line(x, 'o', '-', 'o');
		}
		else if (j == y)
		{
			write_line(x, 'o', '-', 'o');
		}
		else
			write_line(x, '|', ' ', '|');
		j++;
	}
}

int main(void)
{
	rush(5, 3);
}
