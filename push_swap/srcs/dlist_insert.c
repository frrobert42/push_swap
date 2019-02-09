/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:34:18 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/09 13:33:14 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlist		*dlist_insert(t_dlist *p_list, int data, int position)
{
	struct s_node	*p_temp;
	struct s_node	*p_new;
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
					p_list = dlist_append(p_list, data);
				else if (p_temp->p_prev == NULL)
					p_list = dlist_prepend(p_list, data);
				else
				{
					p_new = malloc(sizeof(*p_new));
					if (p_new != NULL)
					{
						p_new->data = data;
						p_temp->p_next->p_prev = p_new;
						p_temp->p_prev->p_next = p_new;
						p_new->p_prev = p_temp->p_prev;
						p_new->p_next = p_temp;
						p_list->length++;
					}
				}
			}
			else
				p_temp = p_temp->p_next;
			i++;
		}
	}
	return (p_list);
}
