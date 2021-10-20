/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:25:09 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/19 19:32:39 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		init_cond(int ac, char **av);
int		double_height(int tab[4][4], int pos, int size);
int		pos_ok(int tab[4][4], int pos, int input[16]);

int	solve(int tab[4][4], int input[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 1;
	while (size <= 4)
	{	
		if (double_height(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (pos_ok(tab, pos, input) == 0)
			{
				if (solve(tab, input, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
		size++;
	}
	return (0);
}

void	solution(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j < 3)
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	int	tab[4][4];
	int	*input;
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			tab[i][j] = 0;
		}
	}
	if (init_cond(ac, av) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	input = get_numbers(av[1]);
	if (solve(tab, input, 0) == 1)
		solution(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
