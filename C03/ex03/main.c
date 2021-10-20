/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:48:29 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/16 17:27:25 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	dest[100];

	strcpy(dest, "Vamos testar: ");
	ft_strncat(dest, "FUNCIONA! E MAIS ISTO", 16);
	printf("%s\n", dest);	
}
