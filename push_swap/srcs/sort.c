/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 13:07:20 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:07:22 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			find_max(t_dlist *pile_a)
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

int			find_min(t_dlist *pile_a)
{
	struct s_node	*p_temp;
	int				min;

	min = INT_MAX;
	p_temp = pile_a->p_head;
	while (p_temp != NULL)
	{
		if (min > p_temp->data)
		{
			min = p_temp->data;
		}
		p_temp = p_temp->p_next;
	}
	return (min);
}

void		put_b_to_a(t_dlist *pile_a, t_dlist *pile_b)
{
	while (pile_b->length > 0)
	{
		ft_putstr("pa\n");
		pa(pile_a, pile_b);
	}
}
