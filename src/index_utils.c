/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:50:57 by szaoual           #+#    #+#             */
/*   Updated: 2025/03/25 15:50:58 by szaoual          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

static int	find_max_pos(t_stacks *stacks)
{
	int	i;
	int	max;
	int	max_pos;

	i = 1;
	max = stacks->a[0];
	max_pos = 0;
	while (i < stacks->size_a)
	{
		if (stacks->a[i] > max)
		{
			max = stacks->a[i];
			max_pos = i;
		}
		i++;
	}
	return (max_pos);
}

static void	set_index(t_stacks *stacks, int *temp, int i)
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (j < stacks->size_a)
	{
		if (temp[j] < stacks->a[i])
			count++;
		j++;
	}
	stacks->a[i] = count;
}

void	index_stack(t_stacks *stacks)
{
	int	*temp;
	int	i;
	int	min_pos;
	int	max_pos;

	temp = malloc(sizeof(int) * stacks->size_a);
	if (!temp)
		error_exit(stacks);
	i = -1;
	while (++i < stacks->size_a)
		temp[i] = stacks->a[i];
	min_pos = find_smallest_pos(stacks);
	max_pos = find_max_pos(stacks);
	i = -1;
	while (++i < stacks->size_a)
	{
		if (i == min_pos)
			stacks->a[i] = 0;
		else if (i == max_pos)
			stacks->a[i] = stacks->size_a - 1;
		else
			set_index(stacks, temp, i);
	}
	free(temp);
}
