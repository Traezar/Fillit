/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:47:03 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/25 16:45:29 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 545
# include "include/libft.h"
# include <fcntl.h>


typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_tetro
{
	t_point			*p0;
	t_point			*p1;
	t_point			*p2;
	t_point			*p3;
}					t_tetro;

char				*get_input(char *name);

int					verify_input(char *buf);
int					verify_line(char *buf);
int					verify_char(char *buf);
int					verify_nbrline(char *buf);
int					verify_nbrhash(char *buf);
int					verify_tetro(char *buf);
int					solve (t_tetro **array);
int					printout(char **board,int boardsize);
int					placep (char ** board, t_tetro *tetromino, int pos, int alp);
int					removp(char ** board, t_tetro *tetromino, int pos, int alp);
int					recur(char **board,t_tetro **array, int alp);
char			**make_board(int size);
t_point				*point_new(int x, int y);
t_tetro				*tetro_new(t_point *p0, t_point *p1, t_point *p2,
		t_point *p3);
int				*point_coord(char *buf, int i);
t_tetro				*tetro_fill(int *coord);
t_tetro				**tetro_array(char *buf);

int				get_min(int i, int j, int k, int l);
int				usage_display(void);

#endif
