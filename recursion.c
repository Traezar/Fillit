/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:34:13 by rsathiad          #+#    #+#             */
/*   Updated: 2018/08/01 21:32:14 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		recur(char **board, t_tetro **array, int alp)
{
	int		lpos;
	int		boardsize;

	boardsize = ft_strlen(board[0]);
	lpos = 0;
	if (*array == NULL)
		return (0);
	while (lpos < (boardsize * boardsize))
	{
		if (placep(board, *array, lpos, alp) == 0)
		{
			if (recur(board, array + 1, alp + 1) == 1)
				removp(board, *array, lpos, alp);
			else
				return (0);
		}
		lpos++;
	}
	return (1);
}
