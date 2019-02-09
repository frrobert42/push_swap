/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:34:36 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/09 11:51:08 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		dlist_display(t_dlist *p_list)
{
	struct s_node *p_temp;

	if (p_list != NULL)
	{
		p_temp = p_list->p_head;
		while (p_temp != NULL)
		{
			printf("%d -> ", p_temp->data); // to mevove
			p_temp = p_temp->p_next;
		}
	}
	printf("NULL\n"); // to remove
}
