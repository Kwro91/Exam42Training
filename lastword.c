/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 09:38:04 by besalort          #+#    #+#             */
/*   Updated: 2022/08/26 10:37:21 by besalort         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;
	int	lc;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		while (argv[1][i - 1] ==  ' ')
			i--;
		while (argv[1][i - 1] != ' ' && argv[1][i] && i > 0)
			i--;
		while (argv[1][i] != ' ' && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}
