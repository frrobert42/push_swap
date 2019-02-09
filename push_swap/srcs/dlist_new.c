/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:33:29 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/09 11:53:48 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlist		*dlist_new(void)
{
	t_dlist *p_new;

	p_new = malloc(sizeof(*p_new));
	if (p_new != NULL)
	{
		p_new->length = 0;
		p_new->p_head = NULL;
		p_new->p_tail = NULL;
	}
	return (p_new);
}
