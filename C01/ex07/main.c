/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:49:15 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/14 18:45:13 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[6];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;

	ft_rev_int_tab(tab, 6);

	printf("%d\n", *tab);
	printf("%d\n", *(tab + 1));
	printf("%d\n", *(tab + 2));
	printf("%d\n", *(tab + 3));
	printf("%d\n", *(tab + 4));
    printf("%d\n", *(tab + 5));
}
