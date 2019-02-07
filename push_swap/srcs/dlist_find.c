/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_find.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:35:40 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/06 16:20:53 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			dlist_find(t_dlist *p_list, int data)
{
	struct s_node	*p_temp;
	int				found;

	if (p_list != NULL)
	{
		p_temp = p_list->p_head;
		found = 0;
		while (p_temp != NULL && !found)
		{
			if (p_temp->data == data)
				return (-1);
			else
			{
				p_temp = p_temp->p_next;
			}
		}
	}
	return (0);
}
