/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ratio.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:43:48 by enoye             #+#    #+#             */
/*   Updated: 2022/07/27 18:40:55 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../headers/validation.h"

void	check_ratio(char *line)
{
	check_digit_or_charset(line, ".");
	if (count_char(line, '.') > 1)
		exit_error();
	if (ft_atof(line) > 1.0F)
		exit_error();
}
