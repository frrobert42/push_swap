/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:16:06 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/07 18:04:31 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		min_max(t_dlist *pile_a)
{
	struct s_node	*p_temp;
	int				max;
	int				min;

	max = INT_MAX;
	min = INT_MIN;
	p_temp = pile_a->p_head;
	while (p_temp != NULL)
	{
		if (max < p_temp->data)
			max = p_temp->data;
		if (min > p_temp->data)
			min = p_temp->data;
		p_temp = p_temp->p_next;
	}
	pile_a->min = min;
	pile_a->max = max;
}

int		pile_is_sort(t_dlist *pile_a)
{
	struct s_node *p_temp;

	p_temp = pile_a->p_head;
	while (p_temp != NULL && p_temp->p_next != NULL)
	{
		if (p_temp->data < p_temp->p_next->data)
		{
			//printf("KO\n");
			return (0);
		}
		p_temp = p_temp->p_next;
	}
	printf("OK\n");
	return (1);
}

void		quick_sort_inside2(t_dlist *pile_b)
{
	if (pile_is_sort(pile_b) != 1)
	{
		if (pile_b->p_head->data > pile_b->p_head->p_next->data)
		{
			sa(pile_b);
		}
		ra(pile_b);
		quick_sort_inside2(pile_b);
	}
}

void		quick_sort(t_dlist *pile_a, t_dlist *pile_b)
{
	struct s_node	*p_temp;
	int				median;
	int				i;

	median = 3;
	i = pile_a->length;
	p_temp = pile_a->p_head;
	while (i > 0)
	{
		if (p_temp->data <= median)
			pa(pile_b, pile_a);
		else
			ra(pile_a);
		p_temp = p_temp->p_next;
		i--;
	}
	//quick_sort_inside1(pile_a);
	dlist_display(pile_b);
	quick_sort_inside2(pile_b);
	/*i = pile_b->length;
	  while (i > 0)
	  {
	  pa(pile_a, pile_b);
	  i--;
	  }*/
}
