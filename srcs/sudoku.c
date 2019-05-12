/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 10:56:31 by adstan            #+#    #+#             */
/*   Updated: 2017/08/27 23:30:55 by adstan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "punct.h"

int vertical(char **argv, int col, int k)
{
    int i;

    i = 0;
    while (i < 9)
    { 
	if (k == argv[i][col] - '0')
	    return (0);
	i++;
    }
    return (1);
}


char **creare(char **argv)
{
    int i;
    int j;
    char **s;

    s = (char**)malloc(sizeof(char*) * 9);
    i = 0;
    while (i < 9)
    {
	s[i] = (char*) malloc(sizeof(char) * 9);
	i++;
    }

    i = 1;
    while (i < 10)
    {
	j = 0;
	while (j < 9)
	{
	    s[i - 1][j] = argv[i][j];
	    j++;
	}
	i++;
    }
    return (s);
}

int sudoku(char **argv, int i, int j)
{
    int nr;

    if (i == 8 && j == 8 )
    {
	bagceva(argv);
	return (1);
    }
    while (argv[i][j] != '.')
    {
	if (j == 8)
	{ 
	    i++;
	    j = 0;
	}
	else
	    j++;
    }
    if (argv[i][j] == '.')
    {
	nr = 1;
	while (nr <= 9)
	{
	    if (vertical(argv, j, nr) && orizontal(argv, i, nr) && cutiuta(argv, i, j, nr))
	    {
		argv[i][j] = nr + '0'; 
		if (j == 8)
		{  
		    if (sudoku(argv,i + 1, 0)) 
			return 1; 
		}
		else
		{   
		    if (sudoku(argv, i, j + 1)) 
			return 1; 
		}
	    }
	    nr++;
	}
    }
    argv[i][j] = '.';
    return 0;
}

int main(int argc, char **argv)
{
    int i;
    char **s;

    s = creare(argv);
    if (argc == 10 && verif(s) != 0)
    {
	i = sudoku(s, 0, 0);
	if (i == 0)
	    ft_putstr("Error");
	else
	    display_board(s);
    }
    else
	ft_putstr("Error");	
    return (0);
}
