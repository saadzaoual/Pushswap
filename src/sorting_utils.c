/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 08:33:34 by isel-kha          #+#    #+#             */
/*   Updated: 2025/03/25 18:07:08 by szaoual          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int	find_smallest_pos(t_stacks *stacks)
{
	int	smallest;
	int	smallest_pos;
	int	i;

	smallest = stacks->a[0];
	smallest_pos = 0;
	i = 1;
	while (i < stacks->size_a)
	{
		if (stacks->a[i] < smallest)
		{
			smallest = stacks->a[i];
			smallest_pos = i;
		}
		i++;
	}
	return (smallest_pos);
}
