/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:38:00 by besalort          #+#    #+#             */
/*   Updated: 2022/08/31 21:49:01 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	i = ft_strlen(av[1]);
	while (av[1][i-1] <= 32 && av[1][i-1])
		i--;
	while (av[1][i-1] > 32 && av[1][i-1])
		i--;
	while (av[1][i])
		write(1, &av[1][i++], 1);
}
