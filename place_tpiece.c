/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetromino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:04:58 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/30 10:21:55 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int placep (char ** board, t_tetro *tetromino, int boardsize, int pos, int alp)
{
	int x;
	int y;

	x = pos/boardsize;
	y = pos%boardsize;
	char c = alp + 'A';
	if (board [y + tetromino->p0->y][x + tetromino->p0->x] == '.' &&
		board [y + tetromino->p1->y][x + tetromino->p1->x] == '.' &&
		board [y + tetromino->p2->y][x + tetromino->p2->x] == '.' &&
		board [y + tetromino->p3->y][x + tetromino->p3->x] == '.' )
		{
			board [y + tetromino->p0->y][x + tetromino->p0->x] = c ;
			board [y + tetromino->p1->y][x + tetromino->p1->x] = c ;
			board [y + tetromino->p2->y][x + tetromino->p2->x] = c ;
			board [y + tetromino->p3->y][x + tetromino->p3->x]  = c ;
			return (1);
		}
		else
			return (0);
}


int removp(char ** board, t_tetro *tetromino, int boardsize, int pos, int alp)
{
	int x;
	int y;

	x = pos%boardsize;
	y = pos/boardsize;
	char c = alp + 'A';
	if (board [y + tetromino->p0->y][x + tetromino->p0->x] == c &&
		board [y + tetromino->p1->y][x + tetromino->p1->x] == c &&
		board [y + tetromino->p2->y][x + tetromino->p2->x] == c &&
		board [y + tetromino->p3->y][x + tetromino->p3->x] == c)
		{
			board [y + tetromino->p0->y][x + tetromino->p0->x] = '.';
			board [y + tetromino->p1->y][x + tetromino->p1->x] = '.';
			board [y + tetromino->p2->y][x + tetromino->p2->x] = '.';
			board [y + tetromino->p3->y][x + tetromino->p3->x] = '.';
			return (1);
		}
		else
			return (0);
}
