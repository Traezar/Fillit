/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_nbrline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:17:18 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/24 16:48:16 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verify_nbrline(char *buf)
{
	int		i;
	int		line;

	i = 0;
	while (buf[i])
	{
		line = 0;
		while (line < 4 && buf[i])
		{
			if (buf[i] == '\n')
				line++;
			i++;
		}
		if (line == 4 && buf[i] != '\n' && buf[i] != '\0')
			return (0);
		i++;
	}
	return (1);
}
