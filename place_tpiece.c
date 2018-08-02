/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetromino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:04:58 by rsathiad          #+#    #+#             */
/*   Updated: 2018/08/01 22:24:13 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		placep(char **board, t_tetro *tetromino, int pos, int alp)
{
	int		x;
	int		y;
	char	c;
	int		boardsize;

	boardsize = ft_strlen(board[0]);
	c = alp + 'A';
	x = 0;
	y = 0;
	x = pos % boardsize;
	y = pos / boardsize;
	if (board[y + tetromino->p0->y][x + tetromino->p0->x] == '.' &&
			board[y + tetromino->p1->y][x + tetromino->p1->x] == '.' &&
			board[y + tetromino->p2->y][x + tetromino->p2->x] == '.' &&
			board[y + tetromino->p3->y][x + tetromino->p3->x] == '.')
	{
		board[y + tetromino->p0->y][x + tetromino->p0->x] = c;
		board[y + tetromino->p1->y][x + tetromino->p1->x] = c;
		board[y + tetromino->p2->y][x + tetromino->p2->x] = c;
		board[y + tetromino->p3->y][x + tetromino->p3->x] = c;
		return (0);
	}
	else
		return (1);
}

int		removp(char **board, t_tetro *tetromino, int pos, int alp)
{
	int		x;
	int		y;
	char	c;
	int		boardsize;

	x = 0;
	y = 0;
	boardsize = ft_strlen(board[0]);
	c = alp + 'A';
	x = pos % boardsize;
	y = pos / boardsize;
	if (board[y + tetromino->p0->y][x + tetromino->p0->x] == c &&
			board[y + tetromino->p1->y][x + tetromino->p1->x] == c &&
			board[y + tetromino->p2->y][x + tetromino->p2->x] == c &&
			board[y + tetromino->p3->y][x + tetromino->p3->x] == c)
	{
		board[y + tetromino->p0->y][x + tetromino->p0->x] = '.';
		board[y + tetromino->p1->y][x + tetromino->p1->x] = '.';
		board[y + tetromino->p2->y][x + tetromino->p2->x] = '.';
		board[y + tetromino->p3->y][x + tetromino->p3->x] = '.';
		return (0);
	}
	else
		return (1);
}
