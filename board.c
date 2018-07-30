/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:04:25 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/26 00:04:27 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"



char **make_board (int size)
{
	int i;
	char **board;

	i = 0;
	if (!(board = (char **)malloc(sizeof(char *) * size)))
		return (NULL);
	while (i < size)
	{
		if (!(board[i++] = (char *)malloc(sizeof(char) * size)))
			return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ft_striter(board[i], ft_memset(board[i], '.', size ));
		i++;
	}
	return (board);
}

int					printout(char **board,int boardsize)
{
	int posx;
	int posy;
	int pos;

	pos = 0;
	posx = pos%boardsize;
	posy = pos/boardsize;
	while (pos < (boardsize * boardsize))
	{
		if (pos == boardsize - 1)
		ft_putchar ('\n');
		ft_putchar (board[posy][posx]);
		pos++;
	}
	return (1);
}


int solve(t_tetro **tetromino)
{
		char ** board;
		int			boardsize;
		int			i;

		i = 0;
		boardsize = 2;

		if (!(board = make_board(boardsize)))
		return (-1);

	while (recur(board,tetromino[0], boardsize, 0, 0) == 0)
		{
			free (board);
			boardsize++;
			if (!(board = make_board(boardsize)))
			return (-1);
		}
		printout (board, 0);
		return 0;
}
