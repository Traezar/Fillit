/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:04:25 by rsathiad          #+#    #+#             */
/*   Updated: 2018/08/01 12:53:40 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**make_board(int size)
{
	int		x;
	int		y;
	char	**board;

	y = -1;
	x = -1;
	if (!(board = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (x < size)
	{
		if (!(board[++x] = (char *)malloc(sizeof(char) * size + 1)))
			return (NULL);
	}
	x = -1;
	while (++y < size)
	{
		while (++x < size)
			board[y][x] = '.';
		x = -1;
	}
	return (board);
}

int			printout(char **board, int boardsize)
{
	int		posx;
	int		posy;
	int		pos;

	pos = 0;
	posx = 0;
	posy = 0;
	while (pos < (boardsize * boardsize))
	{
		if (posx == 0 && pos != 0)
			ft_putchar('\n');
		ft_putchar(board[posy][posx]);
		pos++;
		posx = pos % boardsize;
		posy = pos / boardsize;
	}
	//ft_putchar('\n');
	return (1);
}

int			solve(t_tetro **array)
{
	char	**board;
	int		boardsize;
	int		i;

	i = 0;
	boardsize = 2;
	if (!(board = make_board(boardsize)))
		return (-1);
	while (recur(board, array, 0) == 1)
	{
		free(board);
		boardsize++;
		if (!(board = make_board(boardsize)))
			return (-1);
	}
	printout(board, boardsize);
	return (0);
}
