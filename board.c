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
#include "libft.h"
#include "fillit.h"



char ** make_board(size_t size)
{
	int count;

	i = 0;
	if (!(board = (char **)malloc(sizeof(char *) * size)))
		return (NULL);
	while (i < size)
	{
		if (!(board[i++] = (char *)malloc(sizeof(char)i * size)))
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


int solve(tetromino)
{
		char ** board;
		int			boardsize;

		i = 0;
		boardsize = 2;

		if (!(board = make_board(boardsize)))
		return (-1);

	while (recursionsolution (board, tetromino[i], boardsize, 0) == 0)
		{
			free (board);
			boardsize++;
			if !(board = makeboard(boardsize))
			return (-1);
		}
		printout (board);
		return 0;
}
