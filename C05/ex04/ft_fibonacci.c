/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:54:26 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/20 19:15:06 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	while ((index - 1) > 0)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (-1);
}
