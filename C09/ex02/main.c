/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:09:00 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/28 19:15:46 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);


int	main(void)
{
	char	*str = "abcdefgh";
	char	*charset = "bfg";
	char	**res;
	int		i;

	i = 0;
	res = ft_split(str, charset);
	while (i < 4)
	{
		printf("%s\n", res[i]);
		i++;
	}
}
