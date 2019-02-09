/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 12:42:16 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/09 17:33:38 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_dlist *liste_a, t_dlist *liste_b)
{
	if (liste_b->length == 0)
		return ;
	dlist_prepend(liste_a, liste_b->p_head->data);
	dlist_remove_id(liste_b, 1);
}

void	pb(t_dlist *liste_a, t_dlist *liste_b)
{
	if (liste_a->length == 0)
		return ;
	dlist_prepend(liste_b, liste_a->p_head->data);
	dlist_remove_id(liste_a, 1);
}
