/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 13:03:24 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:03:26 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t		dlist_length(t_dlist *p_list)
{
	size_t ret;

	ret = 0;
	if (p_list != NULL)
		ret = p_list->length;
	return (ret);
}
