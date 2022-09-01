/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listechainee2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:29:23 by besalort          #+#    #+#             */
/*   Updated: 2022/09/01 08:24:19 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdio.h>

void	ft_print(t_list *begin)
{
	while (begin)
	{
		printf("%s = %d\n", begin->name, begin->value);
		begin = begin->next;
	}
}


void	ft_listfill(t_list *begin)
{
	int	i;
	i = 1;
	while(begin)
	{
		begin->value = i;
		begin = begin->next;
		i++;	
	}
}

void	ft_listrev(t_list *begin)
{
	t_list *start;
	t_list *tmp;

	start = begin;
	while (begin->next)
		begin = begin->next;
	while(begin != start)
	{
		tmp = start;
		while(tmp->next != begin)
		{
			tmp = tmp->next;
		}
		begin->next = tmp;
		begin = tmp;
	}
	start->next = 0;
}

int	main(void)
{
	t_list *begin;
	t_list one;
	t_list two;
	t_list three;
	t_list four;
	t_list five;

	begin = &one;
	one.next = &two;
	two.next = &three;
	three.next = &four;
	four.next = &five;
	five.next = 0;

	one.name = "One";
	two.name = "Two";
	three.name = "Three";
	four.name = "Four";
	five.name = "Five";

	ft_listfill(begin);
	ft_print(begin);
	printf("\nReverse\n");
	ft_listrev(begin);
	begin = &five;
	ft_print(begin);
}
