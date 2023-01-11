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
	int				r_index;
	struct s_list_number	*next;
}		t_list_number;

typedef struct s_ps{
	t_list_number *a;
	t_list_number *b;
	int action;
	int len;
}		t_ps;

//////////////////////////////MAIN.C////////////////////////////////////////////
void			error(void);
void			multiple_args(t_ps *env, int ac, char **av);
void			two_args(t_ps *env, char **av);

////////////////////////////////////////////////////////////////////////////////
//////////////////////////////Utils/////////////////////////////////////////////
//////////////////////////////Folder////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//////////////////////////////UTILS_LST.C///////////////////////////////////////
void			lst_show(t_list_number *lst);
void			lst_add_back(t_list_number **lst, t_list_number *new);
void			lst_add_front(t_list_number **lst, t_list_number *new);
t_list_number 	*lst_create(int content, int i);
int 			lst_len(t_list_number *lst);
//////////////////////////////UTILS_LST2.C//////////////////////////////////////
int				solved(t_ps *env);
void			unique (t_ps *env);
void			check_unique(t_ps *env, int value, t_list_number *lst);
void			free_lst(t_ps *env);
void			set_index(t_list_number *lst);

//////////////////////////////FIND_LST.C////////////////////////////////////////
int 			found_highest(t_ps *env);
int 			found_lowest(t_ps *env);

////////////////////////////////////////////////////////////////////////////////
//////////////////////////////Action////////////////////////////////////////////
//////////////////////////////Folder////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//////////////////////////////PUSH.C////////////////////////////////////////////
void			pa(t_ps *env);
void			pb(t_ps *env);

//////////////////////////////SWAP.C////////////////////////////////////////////
void			ss(t_ps *env);
void			sb(t_ps *env);
void			sa(t_ps *env);
//////////////////////////////ROTATE.C//////////////////////////////////////////
void			ra(t_ps *env);
void			rb(t_ps *env);
void			rr(t_ps *env);
//////////////////////////REVERSE_ROTATE.C//////////////////////////////////////
void			rra(t_ps *env);
void			rrb(t_ps *env);
void			rrr(t_ps *env);




////////////////////////////////////////////////////////////////////////////////
///////////////////////////////Sort/////////////////////////////////////////////
//////////////////////////////Folder////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//////////////////////////////SORT_3.C//////////////////////////////////////////
void			sort_three(t_ps *env);

//////////////////////////SORT_BIG_STACK.C//////////////////////////////////////
void			push_75(t_ps *env, int stack);
void			push_25(t_ps *env);
void			push_b(t_ps *env, int idx);
//////////////////////////////SORT_SMALL.C//////////////////////////////////////
void			solve(t_ps *env);

//////////////////////////////SOLVER.C//////////////////////////////////////////
void			solver(t_ps *env);
void			sort_stack_b(t_ps *env);
void			solve_stack(t_ps *env, int stack);

#endif
