/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 13:50:35 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/09 12:50:56 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_dlist *liste_a)
{
	if (liste_a->length < 2)
		return ;
	dlist_append(liste_a, liste_a->p_head->data);
	dlist_remove_id(liste_a, 1);
}

void	rb(t_dlist *liste_b)
{
	if (liste_b->length < 2)
		return ;
	dlist_append(liste_b, liste_b->p_head->data);
	dlist_remove_id(liste_b, 1);
}

void	rr(t_dlist *liste_a, t_dlist *liste_b)
{
	ra(liste_a);
	rb(liste_b);
}

void	rra(t_dlist *liste_a)
{
	if (liste_a->length < 2)
		return ;
	dlist_prepend(liste_a, liste_a->p_tail->data);
	dlist_remove_id(liste_a, liste_a->length);
}

void	rrr(t_dlist *liste_a, t_dlist *liste_b)
{
	rra(liste_a);
	rra(liste_b);
}
