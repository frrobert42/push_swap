/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:08 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:07:09 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_dlist *pile_a)
{
	int		begin;
	int		new_begin;

	if (pile_a->length < 2)
		return ;
	else
	{
		begin = pile_a->p_head->data;
		new_begin = pile_a->p_head->p_next->data;
		dlist_remove_id(pile_a, 1);
		dlist_remove_id(pile_a, 1);
		dlist_prepend(pile_a, begin);
		dlist_prepend(pile_a, new_begin);
	}
}

void	ss(t_dlist *pile_a, t_dlist *pile_b)
{
	if (pile_a->length > 1)
		sa(pile_a);
	if (pile_b->length > 1)
		sa(pile_b);
}
