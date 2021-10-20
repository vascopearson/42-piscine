/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:21:21 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/15 21:57:05 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_putstr_non_printable(char *str);

int main(void)
{
	char	str[] = "Oi\nvoce	 esta bem?";
	ft_putstr_non_printable(str);
}
