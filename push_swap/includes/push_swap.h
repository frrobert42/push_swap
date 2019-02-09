/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:27:13 by frrobert          #+#    #+#             */
/*   Updated: 2019/02/09 18:22:18 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define TRUE 1
# define FALSE -1
# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include "../libft/libft.h"
# include <stdio.h> // to remove

struct				s_node
{
	int				data;
	int				i;
	int				i_sort;
	struct s_node	*p_next;
	struct s_node	*p_prev;
};

typedef struct		s_dlist
{
	int				length;
	int				min;
	int				max;
	int				median;
	struct s_node	*p_tail;
	struct s_node	*p_head;
}					t_dlist;

t_dlist		*dlist_new(void);
void		dlist_delete(t_dlist **p_list);
t_dlist		*dlist_append(t_dlist *p_list, int data);
t_dlist		*dlist_prepend(t_dlist *p_list, int data);
void		dlist_display(t_dlist *p_list);
int			dlist_find(t_dlist *p_list, int data);
size_t		dlist_length(t_dlist *liste_a);
t_dlist		*dlist_remove_id(t_dlist *liste_a, int i);
t_dlist		*dlist_insert(t_dlist *liste_a, int data, int i);


void		sa(t_dlist *liste_a);
void		ss(t_dlist *liste_a, t_dlist *liste_b);
void		pa(t_dlist *liste_a, t_dlist *liste_b);
void		pb(t_dlist *liste_a, t_dlist *liste_b);
void		ra(t_dlist *liste_a);
void		rb(t_dlist *liste_b);
void		rr(t_dlist *liste_a, t_dlist *liste_b);
void		rra(t_dlist *liste_a);
void		rrr(t_dlist *liste_a, t_dlist *liste_b);

void		sort(t_dlist *liste_a, t_dlist *liste_b);
int			is_sort(t_dlist *liste_a);
int			is_sort_print(t_dlist *liste_a);

#endif
