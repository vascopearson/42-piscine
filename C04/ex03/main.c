/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:35:29 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/21 13:08:02 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	int	res;
	char *str;

	str = "   	  ---+--+2147483640abc567  +67";
	res = ft_atoi(str);
	printf("%d\n", res);
}