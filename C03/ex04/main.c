/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:48:29 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/17 11:40:52 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
    char *X = "Techie Delight Ace - the Technical Interviews";
    char *Y = "Ace";
 
    printf("%s\n", ft_strstr(X, Y));
}
