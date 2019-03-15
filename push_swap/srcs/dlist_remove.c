/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:35:04 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:04:25 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void		dlist_remove2(struct s_node *p_temp, t_dlist *p_list)
{
	if (p_temp->p_next == NULL)
	{
		p_list->p_tail = p_temp->p_prev;
		p_list->p_tail->p_next = NULL;
	}
	else if (p_temp->p_prev == NULL)
	{
		p_list->p_head = p_temp->p_next;
		p_list->p_head->p_prev = NULL;
	}
	else
	{
		p_temp->p_next->p_prev = p_temp->p_prev;
		p_temp->p_prev->p_next = p_temp->p_next;
	}
	free(p_temp);
	p_list->length--;
}

t_dlist			*dlist_remove(t_dlist *p_list, int data)
{
	struct s_node	*p_temp;
	int				found;

	p_temp = p_list->p_head;
	found = 0;
	while (p_temp != NULL && !found)
	{
		if (p_temp->data == data)
		{
			dlist_remove2(p_temp, p_list);
			found = 1;
		}
		else
			p_temp = p_temp->p_next;
	}
	return (p_list);
}
