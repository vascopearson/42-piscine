/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:16:05 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/14 16:31:09 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char	str1[] = "tEStE";
	char	*str2;

	str2 = ft_strlowcase(str1);
	write(1, str2, 5);
}
