/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:51:25 by szaoual           #+#    #+#             */
/*   Updated: 2025/03/25 15:51:26 by szaoual          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	exit_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	error_exit(t_stacks *stacks)
{
	if (stacks)
		free_stacks(stacks);
	write(2, "Error\n", 6);
	exit(1);
}

void	clean_exit(t_stacks *stacks)
{
	if (stacks)
		free_stacks(stacks);
	exit(0);
}

void	error_free(char *joined)
{
	if (joined)
		free(joined);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_stacks(t_stacks *stacks)
{
	if (stacks->a)
		free(stacks->a);
	if (stacks->b)
		free(stacks->b);
	free(stacks);
}
