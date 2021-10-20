/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:31:23 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/26 12:40:30 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
int		ft_total_len(int size, char **strs, char *sep);
char	*ft_strcat(char *dest, char *src);

int main(int argc, char **argv)
{
    char    *str;
    (void) argc;
    if (argc > 0)
	{	
		str = ft_strjoin(argc, argv, " - ");
        printf("%s\n", str);
    }
    else
        return (0);
}
