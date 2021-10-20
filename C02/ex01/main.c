/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:21:21 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/15 17:14:06 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *srs, unsigned int n);

int main(void)
{
	char	a[] = "abcdef";
	char	b[] = "teste";
	char	*dest_ret;

	dest_ret = ft_strncpy(b, a, 2);
	printf("%s", dest_ret);
}
