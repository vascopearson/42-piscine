/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:22:38 by emmendes          #+#    #+#             */
/*   Updated: 2021/09/26 20:16:54 by emmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdbool.h>
#include<stdio.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

bool	is_valid(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if(!(a[i] >= 48 && a[i] <= 57) )
		{
			return (false);
		}
		put_char(a[i]);
		i++;
	}
	write(1, "\n", 1);
	return (true);
}

int	main(int argc, char **argv)
{
	if (argc ==  2)
	{
		is_valid(argv[1]);
		write(1, "Error\n", 6);
	}
	else
	{
		write(1, "Error!", 6);
	}
	return (0);
}

