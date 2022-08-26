/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:38:22 by besalort          #+#    #+#             */
/*   Updated: 2022/08/26 10:46:58 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_issep(char c)
{
	if(c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (ft_issep(argv[1][i]) == 1 && argv[1][i])
			i++;
		while (ft_issep(argv[1][i]) == 0 && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
}
