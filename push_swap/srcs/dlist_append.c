/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_append.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:33:44 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/07 12:50:31 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlist		*dlist_append(t_dlist *p_list, int data)
{
	struct s_node *p_new;

	if (p_list != NULL)
	{
		p_new = malloc(sizeof(*p_new));
		if (p_new != NULL)
		{
			p_new->data = data;
			p_new->p_next = NULL;
			if (p_list->p_tail == NULL)
			{
				p_new->p_prev = NULL;
				p_list->p_head = p_new;
				p_list->p_tail = p_new;
			}
			else
			{
				p_list->p_tail->p_next = p_new;
				p_new->p_prev = p_list->p_tail;
				p_list->p_tail = p_new;
			}
			p_list->length++;
		}
	}
	return (p_list);
}
