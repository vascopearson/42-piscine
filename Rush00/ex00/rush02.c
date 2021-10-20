/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:29:03 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/12 18:10:15 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	write_line(int x, char c1, char c2, char c3);

void	write_line(int x, char c1, char c2, char c3)
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

void	rush(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
		{
			write_line(x, 'A', 'B', 'A');
		}
		else if (j == y)
		{
			write_line(x, 'C', 'B', 'C');
		}
		else
			write_line(x, 'B', ' ', 'B');
		j++;
	}
}
