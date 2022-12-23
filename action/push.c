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
	t_list_number *tmp;

	if (env->b == NULL)
	{
		printf("pa : b est null\n");
		return ;
	}
	tmp = env->b;
	printf("[%d]\n", tmp->value);
}

void	pb(t_ps *env)
{
	t_list_number *tmp;

	if (env->a == NULL)
	{
		printf("pb : a est null\n");
		return ;
	}
	tmp = env->a;
	tmp->next = env->b;
}