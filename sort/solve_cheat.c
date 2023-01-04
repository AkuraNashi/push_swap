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
	while (a)
	{
		printf("1\n");
		if (low->value > a->value)
			low = a;
		a = a->next;
	}
	return (low);
}

void	solve_cheat(t_ps *env)
{
	t_list_number *a;
	t_list_number *tmp;
	int i;
	int	j;

	a = env->a;
	i = 0;
	j = lst_len(a);
	while (i < j)
	{
		tmp = a;
		a = a->next;
//		lst_add_back(&env->s, get_lowest(tmp));
		i++;
	}
	printf("========== K ===========\n");
	lst_show(env->s);
	printf("\n");
}