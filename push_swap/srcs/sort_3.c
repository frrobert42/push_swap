/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:19:23 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:07:55 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		sort_3(t_dlist *pile_a)
{
	while (is_sort(pile_a) != 1)
	{
		if (pile_a->p_head->data > pile_a->p_tail->data)
		{
			ft_putstr("ra\n");
			ra(pile_a);
		}
		else if (pile_a->p_head->data > pile_a->p_head->p_next->data)
		{
			sa(pile_a);
			ft_putstr("sa\n");
		}
		else if (pile_a->p_head->p_next->data > pile_a->p_tail->data)
		{
			ra(pile_a);
			ft_putstr("ra\n");
		}
	}
	return ;
}
