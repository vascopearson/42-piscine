/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:48:36 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/15 21:31:40 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int     main(void)
{
        char            *c;

	c = "Bobgfndjfkdjfnur les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. \nhdy\0g0";
        ft_print_memory(c, 32);
}
