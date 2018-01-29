/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bagceva.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 22:24:43 by adstan            #+#    #+#             */
/*   Updated: 2017/08/27 23:37:55 by adstan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "punct.h"

int		vertical(char **argv, int col, int k);

int		orizontal(char **argv, int linie, int k);

int		cutiuta(char **argv, int linie, int col, int nr);

void	bagceva(char **argv)
{
	int nr;

	if (argv[8][8] == '.')
	{
		nr = 0;
		while (++nr <= 9)
		{
			if (vertical(argv, 8, nr) && orizontal(argv, 8, nr)
			&& cutiuta(argv, 8, 8, nr))
				argv[8][8] = nr + '0';
		}
	}
}
