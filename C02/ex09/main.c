/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:21:21 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/14 20:21:29 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *d);

int main(void)
{
	char	a[] = "oI, tUdoi bem? 42palaVras quarenta-e-duas; cinquenta+e+um";
	char	*dest_ret;

	dest_ret = ft_strcapitalize(a);
	printf("%s", dest_ret);
}
