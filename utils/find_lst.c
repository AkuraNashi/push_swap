/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:59:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/29 13:59:44 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	found_lowest(t_ps *env)
{
	t_list_number	*head;
	t_list_number	*tmp;
	int				i;

	i = 0;
	head = env->a;
	tmp = env->a;
	while (env->a)
	{
		if (tmp->value > env->a->value)
			tmp = env->a;
		i++;
		env->a->index = i;
		env->a = env->a->next;
	}
	env->a = head;
	return (tmp->index);
}

int	found_highest(t_ps *env)
{
	t_list_number	*head;
	t_list_number	*tmp;
	int				i;

	i = 0;
	head = env->b;
	tmp = env->b;
	while (env->b)
	{
		if (tmp->value < env->b->value)
			tmp = env->b;
		i++;
		env->b->index = i;
		env->b = env->b->next;
	}
	env->b = head;
	return (tmp->index);
}
