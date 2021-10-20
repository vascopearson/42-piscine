/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:00:48 by vserrao-          #+#    #+#             */
/*   Updated: 2021/09/14 20:21:12 by vserrao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	first_case(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}	
}

int	ft_alpha(char *c)
{
	if ((*c < 'a' || *c > 'z') && (*c < 'A' || *c > 'Z'))
	{
		return (0);
	}
	else
		return (1);
}

int	ft_num(char *c)
{
	if (*c < '0' || *c > '9')
	{
		return (0);
	}
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	first_case(&str[i]);
	while (str[i] != 0)
	{
		if ((ft_num(&str[i]) == 0 && ft_alpha(&str[i]) == 0))
		{
			if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		else
		{
			if ((str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
			{
				str[i + 1] = str[i + 1] + 32;
			}
		}
		i++;
	}
	return (str);
}
