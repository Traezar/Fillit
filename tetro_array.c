#include "fillit.h"

t_tetro		**tetro_array(char *buf)
{
	int	i;
	int	j;
	t_tetro	**array;

	array = (t_tetro **)malloc(sizeof(t_tetro *) * 27);
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (buf[i])
	{
		array[j] = tetro_fill(point_coord(buf, i));
		while (buf[i] != '\n' && buf[i])
		{
			i++;
			if (buf[i] == '\n')
				i++;
		}
		j++;
		i++;
	}
	array[j] = NULL;
	return (array);
}
