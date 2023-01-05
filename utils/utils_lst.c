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

void	lst_show(t_list_number *lst)
{
	while (lst)
	{
		ft_printf("Value : [%d], index: %d, r_index: %d\n", lst->value, lst->index, lst->r_index);
		lst = lst->next;
	}
}

void	lst_add_front(t_list_number **lst, t_list_number *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	lst_add_back(t_list_number **lst, t_list_number *new)
{
	t_list_number	*current;

	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
}

t_list_number	*lst_create(int content, int i)
{
	t_list_number	*tmp;

	tmp = malloc(sizeof(t_list_number));
	tmp->value = content;
	tmp->index = i;
	tmp->r_index = 0;
	tmp->next = NULL;
	return (tmp);
}

int	lst_len(t_list_number *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
