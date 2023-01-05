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

#include "../push_swap.h"

t_list_number	*get_lowest(t_list_number *a)
{
	t_list_number *low;

	low = a;
	printf("Entrer\n");
	printf("\na : \n");
	lst_show(a);
	printf("=====================\n");
	while (a)
	{
		if (low->value > a->value)
			low = a;
		a = a->next;
	}
	return (low);
}

void	solve_cheat(t_ps *env)
{
	t_list_number *a;

	a = env->a;
	while (a)
	{
		env->s = get_lowest(a);
		a = a->next;
		printf("S : \n");
		lst_show(env->s);
	}
}
