/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:28:57 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/22 22:28:58 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_ps *env)
{
	t_list_number	*tmp1;
	t_list_number	*tmp2;

	if (lst_len(env->a) <= 1)
		return ;
	tmp1 = env->a->next;
	tmp2 = tmp1->next;
	tmp1->next = env->a;
	env->a->next = tmp2;
	env->a = tmp1;
}

void	sb(t_ps *env)
{
	t_list_number	*tmp1;
	t_list_number	*tmp2;

	if (lst_len(env->b) <= 1)
		return ;
	tmp1 = env->b->next;
	tmp2 = tmp1->next;
	tmp1->next = env->b;
	env->b->next = tmp2;
	env->b = tmp1;
}

void	ss(t_ps *env)
{
	sa(env);
	sb(env);
}
