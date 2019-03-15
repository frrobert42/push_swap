/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 14:14:06 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:20:38 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int			check_ope2(char *line, t_dlist *pile_a, t_dlist *pile_b)
{
	if (ft_strcmp(line, "rr") == 0)
		rr(pile_a, pile_b);
	else if (ft_strcmp(line, "rra") == 0)
		rra(pile_a);
	else if (ft_strcmp(line, "rrb") == 0)
		rra(pile_b);
	else if (ft_strcmp(line, "rrr") == 0)
		rrr(pile_a, pile_b);
	else if (ft_strcmp(line, "-v") == 0)
	{
		ft_putstr("Pile a : ");
		dlist_display(pile_a);
		ft_putstr("Pile b : ");
		dlist_display(pile_b);
	}
	else
		return (-1);
	return (0);
}

static int			check_ope(char *line, t_dlist *pile_a, t_dlist *pile_b)
{
	int		ret;

	ret = 0;
	if (ft_strcmp(line, "sa") == 0)
		sa(pile_a);
	else if (ft_strcmp(line, "sb") == 0)
		sa(pile_b);
	else if (ft_strcmp(line, "ss") == 0)
		ss(pile_a, pile_b);
	else if (ft_strcmp(line, "pa") == 0)
		pa(pile_a, pile_b);
	else if (ft_strcmp(line, "pb") == 0)
		pb(pile_a, pile_b);
	else if (ft_strcmp(line, "ra") == 0)
		ra(pile_a);
	else if (ft_strcmp(line, "rb") == 0)
		ra(pile_b);
	else
		ret = check_ope2(line, pile_a, pile_b);
	return (ret);
}

int					checker(t_dlist *pile_a, t_dlist *pile_b)
{
	char	*line;

	while (get_next_line(0, &line) > 0)
	{
		if (check_ope(line, pile_a, pile_b) == -1)
		{
			free(line);
			ft_putstr_fd("Error\n", 2);
			return (-1);
		}
		free(line);
	}
	if ((is_sort(pile_a) == 1) && pile_b->length == 0)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (0);
}
