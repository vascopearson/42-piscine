/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:09:13 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/26 18:12:42 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par);

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	struct s_stock_str *stock;
	
	stock = ft_strs_to_tab(argc, argv);	
	ft_show_tab(stock);
	return (0);
}
