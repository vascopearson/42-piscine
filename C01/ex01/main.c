/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:01:25 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/12 12:16:39 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int	a;
	int	*b;
	int	**c;
	int	***d;
	int ****e;
	int *****f;
	int ******g;
	int *******h;
	int ********i;
	int *********j;

	a = 20;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	j = &i;
	ft_ultimate_ft(j);
	write(1, &a, 1);

}
