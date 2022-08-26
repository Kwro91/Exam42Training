/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:54:07 by besalort          #+#    #+#             */
/*   Updated: 2022/08/16 16:07:21 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isnegative(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	return (j % 2);
}

char	*ft_whereisnumber(char *str)
{
	while (*str)
	{	
		if (*str >= '0' && *str <= '9')
			return (str);
		else if(*str >= 7 && *str <= 13)
		{
		}
		else if(*str == '-' || *str == ' ' || *str == '+')
		{
		}
		else
			return ("");
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negatif;
	int	nb;

	i = 0;
	nb = 0;
	negatif = ft_isnegative(str);
	str = ft_whereisnumber(str);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb  = nb * 10 + (str[i] - '0');
		i++;
	}
	if (negatif == 1)
		nb *= -1;
	return (nb);
}
/*
int	main(void)
{
	char	*str = "	+3232---sdkfja";
	printf("%d", ft_atoi(str));
}*/
