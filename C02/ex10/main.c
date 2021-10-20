/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:21:21 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/15 17:32:18 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strlcpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char	str[] = "abcdefgh";
	char	dest[] = "teste";
	int	n = ft_strlcpy(dest, str, 6);
	printf("%s\n", dest);
	printf("%i\n", n);
}
