/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:15:30 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/22 15:15:31 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialisation(t_ps *env, int ac, char **av)
{
	int	i;

	i = 1;
	env->b = NULL;
	while (i < ac)
	{
		lst_add_back(&env->a, lst_create(ft_atoi(av[i])));
		i++;
	}
	lst_show(env->a);
	printf("=========================================\n");
	lst_show(env->b);
	pb(env);
	free_lst(env);
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	main(int ac, char **av)
{
	t_ps	env;

	if (ac >= 2)
	{
		ft_printf("Ac : [%d]\n", ac);
		initialisation(&env, ac, av);
	}
	else
		error();
	return (0);
}
