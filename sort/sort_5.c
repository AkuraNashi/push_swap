/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:25:42 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/29 13:25:43 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_ps *env)
{
	t_list_number *b;

	//Chopper plus petit et plus grand pour mettre en pb
	pb(env);
	pb(env);
	b = env->b;
	sort_three(env);
	if (b->value < b->next->value)
		sb(env);
	pa(env);
	ra(env);
	pa(env);
}
