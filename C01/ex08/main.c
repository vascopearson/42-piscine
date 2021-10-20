/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:49:15 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/13 09:03:23 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int *tab;

	tab = malloc(sizeof(int) * 3);

	*tab = 1;
	tab[0] = 4;
	tab[1] = 2;
	tab[2] = 1;
	tab[3] = 3;

	ft_sort_int_tab(tab, 4);

	printf("%i\n", *tab);
	printf("%i\n", *(tab + 1));
	printf("%i\n", *(tab + 2));
	printf("%i\n", *(tab + 3));
}
