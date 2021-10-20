/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_height.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:23:15 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/19 21:04:31 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	double_height(int tab[4][4], int pos, int size)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (tab[i][pos % 4] == size)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (tab[pos / 4][i] == size)
			return (1);
		i++;
	}
	return (0);
}
