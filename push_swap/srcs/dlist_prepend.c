/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_prepend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:34:02 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/06 14:22:52 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlist		*dlist_prepend(t_dlist *p_list, int data)
{
	struct s_node *p_new;

	if (p_list != NULL)
	{
		p_new = malloc(sizeof(*p_new));
		if (p_new != NULL)
		{
			p_new->data = data;
			p_new->p_prev = NULL;
			if (p_list->p_tail == NULL)
			{
				p_new->p_next = NULL;
				p_list->p_head = p_new;
				p_list->p_tail = p_new;
			}
			else
			{
				p_list->p_head->p_prev = p_new;
				p_new->p_next = p_list->p_head;
				p_list->p_head = p_new;
			}
			p_list->length++;
		}
	}
	return (p_list);
}
