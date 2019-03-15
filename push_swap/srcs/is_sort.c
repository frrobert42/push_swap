/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 13:02:28 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:04:47 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_sort(t_dlist *pile_a)
{
	struct s_node *p_temp;

	if (pile_a->length == 0)
		return (-1);
	if (pile_a->length == 1)
		return (1);
	p_temp = pile_a->p_head;
	while (p_temp != NULL && p_temp->p_next != NULL)
	{
		if (p_temp->data > p_temp->p_next->data)
			return (0);
		p_temp = p_temp->p_next;
	}
	return (1);
}

int		is_rev_sort(t_dlist *pile_a)
{
	struct s_node *p_temp;

	if (pile_a->length == 0)
		return (-1);
	if (pile_a->length == 1)
		return (1);
	p_temp = pile_a->p_tail;
	while (p_temp != NULL && p_temp->p_prev != NULL)
	{
		if (p_temp->data > p_temp->p_prev->data)
			return (0);
		p_temp = p_temp->p_prev;
	}
	return (1);
}
