/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:31:51 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/17 11:38:36 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hd;
	unsigned char	tmp;

	i = 0;
	hd = "0123456789abcdef";
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (!(tmp >= 32 && tmp <= 127))
		{
			ft_putchar('\\');
			ft_putchar(hd[tmp / 16]);
			ft_putchar(hd[tmp % 16]);
		}
		else
			ft_putchar(tmp);
		i++;
	}
}
