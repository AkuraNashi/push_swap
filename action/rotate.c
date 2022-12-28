/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:05:56 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/27 22:05:57 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_ps *env)
{
	t_list_number	*head;
	t_list_number	*new_list;

	if (!env->a)
		return ;
	head = env->a;
	new_list = env->a->next;
	lst_add_back(&env->a, head);
	head->next = NULL;
	env->a = new_list;
}

void	rb(t_ps *env)
{
	t_list_number	*head;
	t_list_number	*new_list;

	if (!env->b)
		return ;
	head = env->b;
	new_list = env->b->next;
	lst_add_back(&env->b, head);
	head->next = NULL;
	env->b = new_list;
}

void	rr(t_ps *env)
{
	ra(env);
	rb(env);
}
