/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:40:21 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/14 16:28:50 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char	*str;
	int		i;

	str = "374bvrwi87345tyhu5ejnr2903=09081]\\;";
	i = ft_str_is_printable(str);
	printf("%i\n", i);
}
