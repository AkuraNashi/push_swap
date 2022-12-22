/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:56:42 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/22 22:56:43 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_lst(t_ps *env)
{
	while (env->a)
	{
		free(env->a);
		env->a = env->a->next;
	}
	while (env->b)
	{
		free(env->b);
		env->b = env->b->next;
	}
	free(env->a);
	free(env->b);
}

void	lst_show(t_list_number *lst)
{
	while (lst)
	{
		ft_printf("Value : [%d]\n", lst->value);
		lst = lst->next;
	}
}

void	lst_add_back(t_list_number **lst, t_list_number *new)
{
	t_list_number	*current;

	if (!*lst)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
}

t_list_number	*lst_create(int content)
{
	t_list_number	*tmp;

	tmp = malloc(sizeof(tmp));
	tmp->value = content;
	tmp->next = NULL;
	return (tmp);
}
