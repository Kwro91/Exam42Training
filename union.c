/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:47:59 by besalort          #+#    #+#             */
/*   Updated: 2022/08/26 11:22:15 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	tab[255];

	i = 0;
	while (i<=255)
	{
		tab[i] = 0;
		i++;
	}
	i = 1;
	if (argc != 3)
		return (0);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (tab[(int)argv[i][j]] == 0)

			{
				tab[(int)argv[i][j]] = 1;
				write(1, &argv[i][j], 1);
			}
			j++;
		}
		i++;
	}
}
