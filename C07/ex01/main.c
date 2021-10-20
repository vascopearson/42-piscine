/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:22:08 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/26 13:26:31 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	max;
	int	min;
	int	diff;

	i = 0;
	min = 0;
	max = 15;
	diff = max - min;
	while (i < max - min + 1)
	{
		printf("%d\n", ft_range(min, max)[i]);
		i++;
	}
}
