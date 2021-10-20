/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:48:29 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/16 17:25:35 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcat(char *dest, char *src);

int main(void)
{
	char	dest[100];

	strcpy(dest, "Vamos testar: ");
	ft_strcat(dest, "FUNCEMINA!");
	printf("%s\n", dest);
	
}
