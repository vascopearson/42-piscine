/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:48:29 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/17 13:24:02 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char	dst[40] = "abc def";
	char	sr[] = "123";
	unsigned int	a;
	unsigned int	b;

	a = 12;
	b = ft_strlcat(dst, sr, a);
	printf("%d", b);
}
