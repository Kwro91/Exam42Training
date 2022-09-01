/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:35:15 by besalort          #+#    #+#             */
/*   Updated: 2022/08/26 14:57:59 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int	ft_howmuch(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i+1);
}

char	*ft_rev(char *str)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	j = ft_strlen(str) - 1;
	if (str[0] == '-')
		i++;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	mal;
	long int	nb;
	char	*str;

	i = 0;
	mal = ft_howmuch(nbr);
	nb = (long int)nbr;
	str = malloc(sizeof(char) * mal);
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
		i++;
	}
	while (nb > 9)
	{
		str[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	str[i] = nb + 48;
	ft_rev(str);
	return(str);
}

int	main(int ac, char **av)
{
	if(ac == 2)
		printf("%s", ft_itoa(atoi(av[1])));
}
