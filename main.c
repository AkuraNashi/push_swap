/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecamilo <lecamilo@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:15:30 by lcamilo-          #+#    #+#             */
/*   Updated: 2026/01/14 13:15:14 by lecamilo         ###   ########.fr       */
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
		check_string(av[i]);
		if (check_number(av[i]))
			lst_add_back(&env->a, lst_create(ft_atoi_limit(av[i]), i));
		else
			error();
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
		check_string(str[i]);
		if (check_number(str[i]))
			lst_add_back(&env->a, lst_create(ft_atoi_limit(str[i]), i));
		else
			error();
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

	env = (t_ps){.action = 0, .a = NULL, .b = NULL};
	if (ac > 2)
		multiple_args(&env, ac, av);
	else if (ac == 2)
		two_args(&env, av);
	else
		return (0);
	env.len = lst_len(env.a);
	if (env.len == 1)
		return (0);
	unique(&env);
	if (solved(&env))
		return (0);
	set_index(env.a);
	solver(&env);
	free_lst(&env);
	return (0);
}
