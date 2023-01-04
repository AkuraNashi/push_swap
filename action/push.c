/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:55:17 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/22 22:55:18 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_ps *env)
{
	t_list_number	*tmp;

	if (!env->b)
		return ;
	tmp = env->b;
	env->b = env->b->next;
	lst_add_front(&env->a, tmp);
	env->action++;
	ft_printf("pa\n");
}

void	pb(t_ps *env)
{
	t_list_number	*tmp;

	if (!env->a)
		return ;
	tmp = env->a;
	env->a = env->a->next;
	lst_add_front(&env->b, tmp);
	env->action++;
	ft_printf("pb\n");
}
