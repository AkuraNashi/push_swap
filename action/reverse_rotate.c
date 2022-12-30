/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:10:54 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/28 16:10:55 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_ps *env)
{
	t_list_number	*tmp;
	t_list_number	*old_head;
	t_list_number	*new_last;

	if (!env->a)
		return ;
	tmp = env->a;
	old_head = env->a;
	while (tmp->next)
	{
		new_last = tmp;
		tmp = tmp->next;
	}
	lst_add_front(&env->a, tmp);
	tmp->next = old_head;
	new_last->next = NULL;
	ft_printf("rra\n");
}

void	rrb(t_ps *env)
{
	t_list_number	*tmp;
	t_list_number	*old_head;
	t_list_number	*new_last;

	if (!env->b)
		return ;
	tmp = env->b;
	old_head = env->b;
	while (tmp->next)
	{
		new_last = tmp;
		tmp = tmp->next;
	}
	lst_add_front(&env->b, tmp);
	tmp->next = old_head;
	new_last->next = NULL;
	ft_printf("rrb\n");
}

void	rrr(t_ps *env)
{
	rra(env);
	rrb(env);
	ft_printf("rrr\n");
}
