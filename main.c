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

void	multiple_args(t_ps *env, int ac, char **av)
{
	int	i;

	i = 1;
	env->b = NULL;
	while (i < ac)
	{
		lst_add_back(&env->a, lst_create(ft_atoi(av[i]), i));
		i++;
	}
}

void	two_args(t_ps *env, char **av)
{
	char	**str;
	int		i;

	str = ft_split(av[1], ' ');
	i = 0;
	while (str[i])
	{
		lst_add_back(&env->a, lst_create(ft_atoi(str[i]), i));
		i++;
	}
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	main(int ac, char **av)
{
	t_ps	env;

	env.action = 0;
	if (ac > 2)
		multiple_args(&env, ac, av);
	else if (ac == 2)
		two_args(&env, av);
	else
		return (0);
	unique(&env);
	if (solved(&env))
		return (0);
//	set_index(env.a);
	solver(&env);
	free_lst(&env);
	printf("nb action : [%d]\n", env.action);
	return (0);
}
