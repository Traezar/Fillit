/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:34:13 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/30 10:22:18 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int recur(char **board,t_tetro *tetromino,int boardsize,int pos, int alp)
{
	int z;

	z = 0;
	if (tetromino == NULL)
	return (1);
	while (pos < (boardsize * boardsize))
	{
		placep (board,&tetromino[z],boardsize, pos, alp);
		if(!(recur(board,&tetromino[z + 1], boardsize,0, alp)))
			removp(board,&tetromino[z],boardsize,pos, alp);
		pos++;
	}
	if (pos == (boardsize * boardsize))
		return 0;
	return 1;
}
