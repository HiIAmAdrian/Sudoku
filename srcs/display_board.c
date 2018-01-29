/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 22:23:43 by adstan            #+#    #+#             */
/*   Updated: 2017/08/27 23:36:18 by adstan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "punct.h"

void	ft_putchar(char c);

void	display_board(char **board)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(board[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
