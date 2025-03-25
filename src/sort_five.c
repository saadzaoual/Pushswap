/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:51:45 by szaoual           #+#    #+#             */
/*   Updated: 2025/03/25 15:51:46 by szaoual          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	sort_five(t_stacks *stacks)
{
	int	smallest_pos;

	smallest_pos = find_smallest_pos(stacks);
	if (smallest_pos == 1)
		sa(stacks);
	else if (smallest_pos == 2)
	{
		ra(stacks);
		ra(stacks);
	}
	else if (smallest_pos == 3)
	{
		ra(stacks);
		ra(stacks);
		ra(stacks);
	}
	else if (smallest_pos == 4)
	{
		rra(stacks);
	}
	pb(stacks);
	sort_four(stacks);
	pa(stacks);
}
