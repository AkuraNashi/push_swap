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

int	check_number(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (ft_strlen(str) > 1)
	{
		while (str[i])
		{
			if (str[i] == '-')
				count++;
			i++;
		}
	}
	if (count > 1)
		return (0);
	return (1);
}

void	multiple_args(t_ps *env, int ac, char **av)
{
	int	i;

	i = 1;
	env->b = NULL;
	while (i < ac)
	{
		if (check_number(av[i]))
			lst_add_back(&env->a, lst_create(ft_atoi(av[i]), i));
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
		if (check_number(str[i]))
			lst_add_back(&env->a, lst_create(ft_atoi(str[i]), i));
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
	unique(&env);
	set_index(env.a);
//	solved(&env);
	solver(&env);
	free_lst(&env);
	return (0);
}
