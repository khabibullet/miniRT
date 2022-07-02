/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <enoye@clown.ru>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:58:36 by anemesis          #+#    #+#             */
/*   Updated: 2022/07/02 16:24:50 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "minirt.h"

void	parse_rt(int argc, char **argv);
void	init_consts(t_minirt *rt);
int		is_valid(int fd, char *name);
int		is_line_valid(char *line);
int		is_digit(char c);
int		is_right_coord(char *line);
int		is_right_norm_vec(char *line);
int		is_right_camera(char *line);
int		is_right_ambient(char *line);

#endif