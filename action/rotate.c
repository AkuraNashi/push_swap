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
	t_list_number *tmp;

	tmp = env->a;
	while (tmp)
		tmp = tmp->next;
}
void	rb(t_ps env)
{
	printf("rb env pas implementer [%p]", &env);
}

void	rra(t_ps env)
{
	printf("rra env pas implementer [%p]", &env);
}

void	rrb(t_ps env)
{
	printf("rrb env pas implementer [%p]", &env);
}

void	rrr(t_ps env)
{
	printf("rrr env pas implementer [%p]", &env);
}