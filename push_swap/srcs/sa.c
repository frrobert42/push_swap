/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:08 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/07 14:47:42 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_dlist *pile_a)
{
	struct s_node	*p_begin;
	struct s_node	*p_new_begin;

	if (pile_a->length < 2)
		return ;
	else
	{
		p_begin = pile_a->p_head;
		p_new_begin = p_begin->p_next;
		p_begin->p_next = p_new_begin->p_next;
		p_begin->p_prev = p_new_begin;
		p_new_begin->p_prev = NULL;
		p_new_begin->p_next = p_begin;
		pile_a->p_head = p_new_begin;
		pile_a->p_head->p_next = p_begin;
	}
}

void	ss(t_dlist *pile_a, t_dlist *pile_b)
{
	if (pile_a->length > 1)
		sa(pile_a);
	if (pile_b->length > 1)
		sa(pile_b);
}
