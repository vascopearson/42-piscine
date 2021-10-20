/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 08:18:58 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/13 09:01:41 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	swap;

	j = 0;
	while (j < size)
	{
		i = j + 1;
		while (i < size)
		{
			if (*(tab + i) < *(tab + j))
			{
				swap = *(tab + j);
				*(tab + j) = *(tab + i);
				*(tab + i) = swap;
			}
			i++;
		}
		j++;
	}
}
