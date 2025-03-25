/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:51:10 by szaoual           #+#    #+#             */
/*   Updated: 2025/03/25 15:51:11 by szaoual          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

char	*join_arguments(int ac, char **av)
{
	char	*result;
	char	*temp;
	int		i;

	result = NULL;
	i = 1;
	while (i < ac)
	{
		if (!result)
			result = ft_strdup(av[i]);
		else
		{
			temp = ft_strjoin(result, " ");
			if (!temp)
				return (NULL);
			free(result);
			result = ft_strjoin(temp, av[i]);
			free(temp);
		}
		if (!result)
			return (NULL);
		i++;
	}
	return (result);
}
