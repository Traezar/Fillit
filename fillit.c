/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:33:18 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/27 10:08:36 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*buf;
	t_tetro	**array;

	if (argc != 2)
		return (usage_display());
	buf = get_input(argv[1]);
	ft_putstr ("before verify input\n");
	if (verify_input(buf) == 0)
		return (usage_display());
	ft_putstr ("before tetro_array \n");
	array = tetro_array(buf);
	ft_putstr ("until read is good \n");
	if ((solve(array) == -1))
		ft_putstr( "solving failure \n");
	return (0);
}
