/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:28 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/26 09:28:17 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strdup(char *src);

int main()
{
    char source[] = "Copia esta";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target1 = strdup(source);
	char* target2 = ft_strdup(source);

    printf("%s\n", target1);
	printf("%s\n", target2);
    return (0);
}
