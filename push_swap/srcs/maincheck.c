/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maincheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:15:07 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:06:15 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_dlist		*pile_a;
	t_dlist		*pile_b;

	if (arg_min(argc))
		return (0);
	pile_a = dlist_new();
	pile_b = dlist_new();
	if (pile_a == NULL)
		return (0);
	if (pile_b == NULL)
		return (0);
	if (fill_pil(argv, pile_a) == 1)
	{
		dlist_delete(&pile_a);
		dlist_delete(&pile_b);
		return (0);
	}
	checker(pile_a, pile_b);
	dlist_delete(&pile_a);
	dlist_delete(&pile_b);
	return (0);
}
