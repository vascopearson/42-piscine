/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:57:02 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/13 09:04:39 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 3348;
	b = 60;  /*vai dar 55 com resto 48*/
	div = 2;
	mod = 2;
	ft_div_mod(a, b, &div, &mod);
	write(1, &div, 1);
	write(1, &mod, 1);
}
