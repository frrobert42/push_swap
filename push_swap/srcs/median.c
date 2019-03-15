/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 13:09:16 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:06:23 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		define_median(t_dlist *dlist)
{
	int nb;

	nb = 10;
	if (dlist->length < 50)
		nb = 2;
	else if (dlist->length < 150)
		nb = 3;
	else if (dlist->length < 600)
		nb = 8;
	return (nb);
}

int		median_finder(t_dlist *dlist)
{
	int				i;
	int				value;
	int				median;
	struct s_node	*node;
	struct s_node	*node_temp;

	median = define_median(dlist);
	node = dlist->p_head;
	while (node)
	{
		value = node->data;
		node_temp = dlist->p_head;
		i = 0;
		while (node_temp)
		{
			if (value > node_temp->data)
				i++;
			node_temp = node_temp->p_next;
		}
		if (i == (dlist->length / median))
			return (value);
		node = node->p_next;
	}
	return (value);
}
