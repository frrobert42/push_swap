/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:26:47 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/09 18:14:45 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
**	verifie si argument contient uniquement des nombres
*/
static int		check_input(char *s)
{
	int		nb;

	nb = 0;
	nb = ft_atoi(s);
	if (ft_strcmp(ft_itoa(nb), s) != 0)
		return (1);
	return (0);
}

/*
**	verifier nb argument = 1
 */
static int		arg_min(int argc)
{
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

static void	display_and_free(t_dlist *pile_a, t_dlist *pile_b)
{
	dlist_display(pile_a);
	dlist_display(pile_b);

	sort(pile_a, pile_b);


	dlist_display(pile_a);
	dlist_display(pile_b);
	//dlist_delete(&pile_a);
	//dlist_delete(&pile_b);
}

static int		fill_pil(char **argv, t_dlist *pile_a)
{
	int			i;

	i = 1;
	while (argv[i])
	{
		if (check_input(argv[i]) == 1
		|| (dlist_find(pile_a, ft_atoi(argv[i])) == 1))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		dlist_append(pile_a, ft_atoi(argv[i]));
		i++;
	}
	return (0);
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
	pile_b = dlist_new();
	if (pile_a == NULL || pile_b == NULL)
		return (0);
	if (fill_pil(argv, pile_a) == 1)
		return (0);
	display_and_free(pile_a, pile_b);
	return (0);
}
