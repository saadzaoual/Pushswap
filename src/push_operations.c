/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:51:19 by szaoual           #+#    #+#             */
/*   Updated: 2025/03/25 15:51:20 by szaoual          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	pa(t_stacks *stacks)
{
	int	i;

	if (!stacks || stacks->size_b < 1)
		clean_exit(stacks);
	i = stacks->size_a;
	while (i > 0)
	{
		stacks->a[i] = stacks->a[i - 1];
		i--;
	}
	stacks->a[0] = stacks->b[0];
	i = 0;
	while (i < stacks->size_b - 1)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->size_b--;
	stacks->size_a++;
	write(1, "pa\n", 3);
}

void	pb(t_stacks *stacks)
{
	int	i;

	if (!stacks || stacks->size_a < 1)
		clean_exit(stacks);
	i = stacks->size_b;
	while (i > 0)
	{
		stacks->b[i] = stacks->b[i - 1];
		i--;
	}
	stacks->b[0] = stacks->a[0];
	i = 0;
	while (i < stacks->size_a - 1)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->size_a--;
	stacks->size_b++;
	write(1, "pb\n", 3);
}
