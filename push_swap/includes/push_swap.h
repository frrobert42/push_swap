/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:27:13 by frrobert          #+#    #+#             */
/*   Updated: 2019/03/15 13:09:15 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include "../libft/libft.h"

struct				s_node
{
	int				data;
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

t_dlist				*dlist_new(void);
void				dlist_delete(t_dlist **p_list);
t_dlist				*dlist_append(t_dlist *p_list, int data);
t_dlist				*dlist_prepend(t_dlist *p_list, int data);
void				dlist_display(t_dlist *p_list);
int					dlist_find(t_dlist *p_list, int data);
size_t				dlist_length(t_dlist *liste_a);
t_dlist				*dlist_remove_id(t_dlist *liste_a, int i);
int					check_input(char *s);
int					arg_min(int argc);
int					fill_pil(char **argv, t_dlist *pile_a);
void				sa(t_dlist *liste_a);
void				ss(t_dlist *liste_a, t_dlist *liste_b);
void				pa(t_dlist *liste_a, t_dlist *liste_b);
void				pb(t_dlist *liste_a, t_dlist *liste_b);
void				ra(t_dlist *liste_a);
void				rr(t_dlist *liste_a, t_dlist *liste_b);
void				rra(t_dlist *liste_a);
void				rrr(t_dlist *liste_a, t_dlist *liste_b);
void				rev_sort(t_dlist *liste_a, t_dlist *liste_b);
int					median_finder(t_dlist *liste_a);
int					is_sort(t_dlist *liste_a);
int					is_rev_sort(t_dlist *liste_a);
void				sort_3(t_dlist *pile_a);
int					find_max(t_dlist *liste_a);
int					find_min(t_dlist *liste_a);
void				put_b_to_a(t_dlist *pile_a, t_dlist *pile_b);
void				push_swap(t_dlist *pile_a, t_dlist *pile_b);
int					checker(t_dlist *pile_a, t_dlist *pile_b);

#endif
