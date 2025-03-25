/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:51:04 by szaoual           #+#    #+#             */
/*   Updated: 2025/03/25 19:31:07 by szaoual          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

static void	sort_stack(t_stacks *stacks)
{
	if (!is_sorted(stacks))
	{
		if (stacks->size_a == 2)
			sort_three(stacks);
		else if (stacks->size_a == 3)
			sort_three(stacks);
		else if (stacks->size_a == 4)
			sort_four(stacks);
		else if (stacks->size_a == 5)
			sort_five(stacks);
		else
			sort_big(stacks);
	}
}

int	main(int ac, char **av)
{
	t_stacks	*stacks;

	if (ac < 2)
		return (0);
	stacks = parse_input(ac, av);
	if (!stacks)
		exit_error();
	sort_stack(stacks);
	if (stacks)
		free_stacks(stacks);
	return (0);
}
