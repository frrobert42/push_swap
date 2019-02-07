/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_remove_id.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:35:15 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/07 13:19:47 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlist		*dlist_remove_id(t_dlist *p_list, int position)
{
	struct s_node	*p_temp;
	int				i;

	if (p_list != NULL)
	{
		p_temp = p_list->p_head;
		i = 1;
		while (p_temp != NULL && i <= position)
		{
			if (position == i)
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
			else
			{
				p_temp = p_temp->p_next;
			}
			i++;
		}
	}
	return (p_list);
}
