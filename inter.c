/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:10:01 by besalort          #+#    #+#             */
/*   Updated: 2022/08/26 11:21:50 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	tab[255];

	if (argc != 3)
		return (0);
	i = 0;
	while (i < 255)
		tab[i++] = 0;
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (tab[(int)argv[1][i]] == 0 && argv[1][i] == argv[2][j])
			{
				tab[(int)argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			j++;
		}
		i++;
	}
}
