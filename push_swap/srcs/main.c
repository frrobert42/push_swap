/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:26:47 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/07 17:50:22 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		check_input(char *s)
{
	int		nb;

	nb = 0;
	nb = ft_atoi(s);
	if (ft_strcmp(ft_itoa(nb), s) != 0)
		return (-1);
	return (0);
}

int		arg_min(int argc)
{
	if (argc < 2)
		return (-1);
	return (0);
}

int		is_sort(t_dlist *pile_a)
{
	struct s_node *p_temp;

	p_temp = pile_a->p_head;
	while (p_temp != NULL && p_temp->p_next != NULL)
	{
		if (p_temp->data > p_temp->p_next->data)
		{
	//		printf("KO\n");
			return (0);
		}
		p_temp = p_temp->p_next;
	}
	//printf("OK\n");
	return (1);
}

void	display_and_free(t_dlist *pile_a, t_dlist *pile_b)
{
	//dlist_display(pile_a);
	dlist_display(pile_b);
	quick_sort(pile_a, pile_b);
	//dlist_display(pile_a);
	dlist_display(pile_b);
	dlist_delete(&pile_a);
	dlist_delete(&pile_b);
}

int		main(int argc, char **argv)
{
	t_dlist		*pile_a;
	t_dlist		*pile_b;
	int			i;

	i = 1;
	if (arg_min(argc))
		return (0);
	pile_a = dlist_new();
	pile_b = dlist_new(); // to secure
	while (argv[i])
	{
		if (check_input(argv[i]) == -1 || (dlist_find(pile_a, ft_atoi(argv[i])) == -1))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		dlist_append(pile_a, ft_atoi(argv[i]));
		i++;
	}
	display_and_free(pile_a, pile_b);
	return (0);
}
