/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:25:11 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/19 21:04:01 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ver_col_up(int tab[4][4], int pos, int input[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i++;
		}
		if (input[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	ver_row_right(int tab[4][4], int pos, int input[16])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i--;
		}
		if (input[12 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	ver_col_down(int tab[4][4], int pos, int input[16])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i--;
		}
		if (input[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	ver_row_left(int tab[4][4], int pos, int input[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (input[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	pos_ok(int tab[4][4], int pos, int input[16])
{
	if (ver_row_left(tab, pos, input) == 1)
		return (1);
	if (ver_row_right(tab, pos, input) == 1)
		return (1);
	if (ver_col_down(tab, pos, input) == 1)
		return (1);
	if (ver_col_up(tab, pos, input) == 1)
		return (1);
	return (0);
}
