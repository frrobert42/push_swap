/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 13:06:03 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:06:58 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	b_to_a_rotate(t_dlist *pile_a, t_dlist *pile_b)
{
	if (pile_b->p_head->data == find_max(pile_b))
	{
		ft_putstr("pa\n");
		pa(pile_a, pile_b);
	}
	else
	{
		ft_putstr("rb\n");
		ra(pile_b);
	}
}

void	b_to_a_reverse_rotate(t_dlist *pile_a, t_dlist *pile_b)
{
	if (pile_b->p_head->data == find_max(pile_b))
	{
		ft_putstr("pa\n");
		pa(pile_a, pile_b);
	}
	else
	{
		ft_putstr("rrb\n");
		rra(pile_b);
	}
}

int		r_or_rr(t_dlist *pile_b)
{
	struct s_node	*temp;
	int				r;
	int				rr;

	r = 0;
	rr = 0;
	temp = pile_b->p_head;
	while (temp->data != find_max(pile_b))
	{
		r++;
		temp = temp->p_next;
	}
	temp = pile_b->p_tail;
	while (temp->data != find_max(pile_b))
	{
		rr++;
		temp = temp->p_prev;
	}
	if (r > rr)
		return (0);
	return (1);
}

void	push_swap_2(t_dlist *pile_a, t_dlist *pile_b)
{
	if (is_sort(pile_a) != 1 && pile_a->length <= 3)
		sort_3(pile_a);
	while (pile_b->p_head != NULL)
	{
		if (r_or_rr(pile_b) == 1)
			b_to_a_rotate(pile_a, pile_b);
		else
			b_to_a_reverse_rotate(pile_a, pile_b);
	}
}

void	push_swap(t_dlist *pile_a, t_dlist *pile_b)
{
	int		i;
	int		length;

	while (pile_a->length > 3)
	{
		pile_a->median = median_finder(pile_a);
		length = pile_a->length;
		i = 1;
		while (i <= length)
		{
			if (pile_a->p_head->data <= pile_a->median)
			{
				ft_putstr("pb\n");
				pb(pile_a, pile_b);
			}
			else
			{
				ft_putstr("ra\n");
				ra(pile_a);
			}
			i++;
		}
	}
	push_swap_2(pile_a, pile_b);
}
