/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   punct.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 22:34:11 by adstan            #+#    #+#             */
/*   Updated: 2017/08/27 23:31:51 by adstan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUNCT_H
# define PUNCT_H
# define ABS  if (j == 8){   if (sudoku(argv,i + 1, 0)) return 1; }
# define ABS2 else{   if (sudoku(argv, i, j + 1)) return 1; }

# define FL   while (argv[i][j] != '.'){ if (j == 8){  i++;j = 0; }
# define FL2 else{ j++; }}

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		verif(char **argv);
void	display_board(char **board);
int		cutiuta(char **argv, int linie, int col, int nr);
void	bagceva(char **argv);
int		orizontal(char **argv, int linie, int k);

#endif
