/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:54:59 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/17 11:39:33 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s2 == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] != '\0' )
	{
		while (*str != '\0')
		{
			if (*str == *to_find && compare(str, to_find))
			{
				return (str);
			}
			str++;
		}
		return (0);
	}
	else
		return (str);
}
