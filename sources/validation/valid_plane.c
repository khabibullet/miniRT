/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_plane.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:47:41 by enoye             #+#    #+#             */
/*   Updated: 2022/07/24 18:31:27 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"
#include "../../libraries/libft/libft.h"

int	valid_plane(char *line)
{
	while (*line == ' ')
		line++;
	if (is_right_coord(line) == 0)
		return (0);
	while (*line != ' ')
		line++;
	while (*line == ' ')
		line++;
	if (is_right_norm_vec(line) == 0)
		return (0);
	while (*line != ' ')
		line++;
	while (*line == ' ')
		line++;
	check_rgb(line);
	while (*line != ' ' && *line != '\n' && *line != '\0')
		line++;
	while (*line == ' ')
		line++;
	if (*line != '\n' && *line != '\0')
		return (0);
	return (1);
}
