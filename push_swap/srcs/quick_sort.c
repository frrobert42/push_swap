/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:16:06 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/09 18:55:17 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_max(t_dlist *pile_a)
{
	struct s_node	*p_temp;
	int				max;

	max = INT_MIN;
	p_temp = pile_a->p_head;
	while (p_temp != NULL)
	{
		if (max < p_temp->data)
			max = p_temp->data;
		p_temp = p_temp->p_next;
	}
	return (pile_a->max = max);
}

int		find_min(t_dlist *pile_a)
{
	struct s_node	*p_temp;
	int				min;

	min = INT_MAX;
	p_temp = pile_a->p_head;
	while (p_temp != NULL)
	{
		if (min > p_temp->data)
				min = p_temp->data;
		p_temp = p_temp->p_next;
	}
	return (min);
}

void		put_b_to_a(t_dlist *pile_a, t_dlist *pile_b)
{
	while (pile_b->length > 0)
	{
		pa(pile_a, pile_b);
	}
}

void		sort(t_dlist *pile_a, t_dlist *pile_b)
{
	struct s_node	*p_temp;

	p_temp = pile_a->p_head;
	while (is_sort(pile_a) != 1)
	{
		if (p_temp->data == find_min(pile_a))
				pb(pile_a, pile_b);
		else
			ra(pile_a);
		p_temp = p_temp->p_next;
	}
	put_b_to_a(pile_a, pile_b);
}
