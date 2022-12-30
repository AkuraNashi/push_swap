/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:57:18 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/22 14:57:19 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libftprintfgnl/includes/libft.h"

typedef struct s_list_number{
	int				value;
	int				index;
	struct s_list_number	*next;
}		t_list_number;

typedef struct s_ps{
	t_list_number *a;
	t_list_number *b;
}		t_ps;

//////////////////////////////MAIN.C////////////////////////////////////////////
void			error(void);

//////////////////////////////PUSH.C////////////////////////////////////////////
void			pa(t_ps *env);
void			pb(t_ps *env);

//////////////////////////////UTILS_LST.C///////////////////////////////////////
void			lst_show(t_list_number *lst);
void			lst_add_back(t_list_number **lst, t_list_number *new);
void			lst_add_front(t_list_number **lst, t_list_number *new);
t_list_number 	*lst_create(int content);
void			free_lst(t_ps *env);
int 			lst_len(t_list_number *lst);
int				solved(t_ps *env);
void			unique (t_ps *env);
void			check_unique(t_ps *env, int value, t_list_number *lst);

//////////////////////////////SWAP.C////////////////////////////////////////////
void			ss(t_ps *env);
void			sb(t_ps *env);
void			sa(t_ps *env);
//////////////////////////////ROTATE.C//////////////////////////////////////////
void			ra(t_ps *env);
void			rb(t_ps *env);
void			rr(t_ps *env);
void			rra(t_ps *env);
void			rrb(t_ps *env);
void			rrr(t_ps *env);

//////////////////////////////SORT_3.C//////////////////////////////////////////
void			sort_three(t_ps *env);

//////////////////////////////SORT_5.C//////////////////////////////////////////
void			sort_five(t_ps *env);

//////////////////////////////SOLVER.C//////////////////////////////////////////
void			solve_small_lst(t_ps *env, int len);
void			solver(t_ps *env);
#endif
