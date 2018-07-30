/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:34:13 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/23 13:14:16 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "fillit.h"

int	recursionsolution (board, tetromino[z], boardsize, pos )
{
	if (tetromino[z] == NULL)
	return (1);
	while (pos < (boardsize * boardsize))
	{
		place_tpiece(tetromino[z],board, boardsize, pos);
		if(!(recursionsolution(board ,tetromino[z + 1] boardsize)))
		{
			remove_tpiece(tetromino[z], board, boardsize, pos);
			pos++;
		}
	}
	if (pos = (boardsize * boardsize))
		return 0;
}
