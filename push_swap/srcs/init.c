/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:31:25 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:04:42 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			check_input(char *s)
{
	int		nb;
	char	*nb_temp;

	nb = 0;
	nb = ft_atoi(s);
	if (!(nb_temp = ft_itoa(nb)))
		return (1);
	if (ft_strcmp(nb_temp, s) != 0)
	{
		free(nb_temp);
		return (1);
	}
	free(nb_temp);
	return (0);
}

int			arg_min(int argc)
{
	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

int			fill_pil(char **argv, t_dlist *pile_a)
{
	int			i;

	i = 1;
	while (argv[i])
	{
		if (check_input(argv[i]) == 1
		|| (dlist_find(pile_a, ft_atoi(argv[i])) == 1))
		{
			ft_putstr("Error\n");
			return (1);
		}
		dlist_append(pile_a, ft_atoi(argv[i]));
		i++;
	}
	return (0);
}
