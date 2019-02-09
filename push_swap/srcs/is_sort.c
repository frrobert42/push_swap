/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towelie <frrobert@student42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 10:50:59 by towelie           #+#    #+#             */
/*   Updated: 2019/02/09 18:35:31 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_sort(t_dlist *pile_a)
{
	struct s_node *p_temp;

	if (pile_a->length == 0)
		return (-1);
	p_temp = pile_a->p_head;
	while (p_temp != NULL && p_temp->p_next != NULL)
	{
		if (p_temp->data > p_temp->p_next->data)
			return (0);
		p_temp = p_temp->p_next;
	}
	return (1);
}

int		is_sort_print(t_dlist *pile_a)
{
	if (is_sort(pile_a) == 1)
	{
		write(1, "OK\n", 3);
		return (1);
	}
	else
	{
		write(1, "KO\n", 3);
		return (0);
	}
}
