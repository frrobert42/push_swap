/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:34:36 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/07 15:12:30 by frrobert         ###   ########.fr       */
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
			printf("%d -> ", p_temp->data);
			//ft_printf("%d -> ", p_temp->data);
			p_temp = p_temp->p_next;
		}
	}
	printf("NULL\n");
}
