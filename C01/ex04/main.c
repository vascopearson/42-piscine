/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:48:48 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/13 09:05:19 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int	a;
	int b;

	a = 3348;
	b = 60; /*vai dar 55 com resto 48*/
	ft_ultimate_div_mod(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
}
