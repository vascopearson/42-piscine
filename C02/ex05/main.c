/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:40:21 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/14 16:26:38 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char	*str;
	int		i;

	str = "B";
	i = ft_str_is_uppercase(str);
	printf("%i\n", i);
}
