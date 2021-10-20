/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:48:29 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/16 17:21:24 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char	*s1;
	char	*s2;
	int 	ret;

	s1 = "abcdefg";
	s2 = "abcdef";
	ret = ft_strncmp(s1, s2, 8);
	printf("%i\n", ret);
	
}
