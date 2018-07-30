/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetromino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:04:58 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/26 00:08:33 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "fillit.h"

int place_tpiece (tetromino, board, boardsize, pos)
{
	int x;
	int y;

	x = pos/boardsize;
	y = pos%boardsize;
	char c = tetromino.alphabet;
	if (board [y + tetromino.one.y] [x + tetromino.one.x] = '.' &&
		board [y + tetromino.two.y][x + tetromino.two.x] = '.' &&
		board [y + tetromino.three.y][x + tetromino.three.x] = '.' &&
		board [y + tetromino.four.y][x + tetromino.four.x]  = '.')
		{
			board [y + tetromino.one.y] [x + tetromino.one.x] = c ;
			board [y + tetromino.two.y][x + tetromino.two.x] = c ;
			board [y + tetromino.three.y][x + tetromino.three.x] = c ;
			board [y + tetromino.four.y][x + tetromino.four.x]  = c ;
			return (1);
		}
		else
			return (0);
}


int remove_tpiece (tetromino, board, boardsize, pos)
{
	int x;
	int y;

	x = pos%boardsize;
	y = pos/boardsize;
	char c = tetromino.alphabet;
	if (board [y + tetromino.one.y] [x + tetromino.one.x] = c &&
		board [y + tetromino.two.y][x + tetromino.two.x] = c &&
		board [y + tetromino.three.y][x + tetromino.three.x] = c &&
		board [y + tetromino.four.y][x + tetromino.four.x]  = c)
		{
			board [y + tetromino.one.y] [x + tetromino.one.x] = '.' ;
			board [y + tetromino.two.y][x + tetromino.two.x] = '.' ;
			board [y + tetromino.three.y][x + tetromino.three.x] = '.' ;
			board [y + tetromino.four.y][x + tetromino.four.x]  = '.' ;
			return (1);
		}
		else
			return (0);
}
