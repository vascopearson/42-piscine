/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:07:05 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/28 15:38:19 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_read_input(void)
{
	char 	*buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

void	ft_write_file(int ac,char **av)
{
	char	*buffer;
	int		fd;
	int		i;

	while (i < ac)
	{
		fd = open(av[1], O_RDONLY);
		if (fd >= 0)
		{
			while (read(1, &buffer, 1) != 0)
				write(1, &buffer, 1);
		}
		close(fd);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2 || av[1][i] == '-')
		ft_read_input();
	else
		ft_write_file(ac, av);
	return (0);
}
