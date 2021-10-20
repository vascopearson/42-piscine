/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:56:59 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/25 16:57:06 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(2147483600));
	printf("%d\n", ft_find_next_prime(2147395600));
	printf("%d\n", ft_find_next_prime(288));
	printf("%d\n", ft_find_next_prime(51496));
	printf("%d\n", ft_find_next_prime(366381));
	printf("%d\n", ft_find_next_prime(147246));
}
