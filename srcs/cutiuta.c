/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cutiuta.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 22:33:24 by adstan            #+#    #+#             */
/*   Updated: 2017/08/27 23:34:58 by adstan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "punct.h"

int	cutiuta(char **argv, int linie, int col, int nr)
{
	int i;
	int j;
	int x;
	int y;

	i = 0;
	x = linie - (linie % 3);
	y = col - (col % 3);
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (argv[i + x][j + y] - '0' == nr)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
