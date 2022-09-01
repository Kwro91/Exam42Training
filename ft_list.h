/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:41:17 by besalort          #+#    #+#             */
/*   Updated: 2022/09/01 07:42:24 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H
typedef struct s_list
{
	char	*name;
	int	value;
	struct s_list	*next;
}	t_list;
#endif
