/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:40:21 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/14 16:25:00 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char	*str;
	int		i;

	str = "rvefdjk";
	i = ft_str_is_lowercase(str);
	printf("%i\n", i);
}
