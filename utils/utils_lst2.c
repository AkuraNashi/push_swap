/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:56:42 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/22 22:56:43 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	solved(t_ps *env)
{
	t_list_number	*tmp;
	t_list_number	*head;

	head = env->a;
	while (head->next)
	{
		tmp = head->next;
		if (head->value < tmp->value)
			head = head->next;
		else
			return (0);
	}
	free_lst(env);
	error();
	return (1);
}

void	unique(t_ps *env)
{
	t_list_number	*lst;
	t_list_number	*tmp;

	lst = env->a;
	while (lst)
	{
		tmp = lst->next;
		check_unique(env, lst->value, tmp);
		lst = lst->next;
	}
}

void	check_unique(t_ps *env, int value, t_list_number *lst)
{
	t_list_number	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (value == tmp->value)
		{
			free_lst(env);
			error();
		}
		tmp = tmp->next;
	}
}

void	free_lst(t_ps *env)
{
	while (env->a)
	{
		free(env->a);
		env->a = env->a->next;
	}
}
