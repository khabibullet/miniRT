/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_right_norm_vec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <enoye@clown.ru>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:09:30 by enoye             #+#    #+#             */
/*   Updated: 2022/07/03 11:34:00 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"
#include "../../libraries/libft/libft.h"

int	is_right_norm_vec(char *line)
{
	int	k;

	k = 0;
	while (k < 3)
	{
		if (*line == '-')
			line++;
		if (*line != '0' && *line != '1')
			return (0);
		while (*line == '0')
			line++;
		if (*line == '1')
		{
			line++;
			if (*line == '.')
			{
				line++;
				if (*line != '0')
					return (0);
				while (*line == '0')
					line++;
			}
			if (k == 2 && *line == ' ') // v konce probel
				return (1);
			else if (k !=2 && *line == ',') // esli ne konec, to zapyataya posle chisla
				line++;
			else
				return (0);
		}
		else if (*line == '.')
		{
			line++;
			if (ft_isdigit(*line) == 0)
				return (0);
			while (ft_isdigit(*line) == 1)
				line++;
			if (k == 2 && *line == ' ') // v konce probel
				return (1);
			else if (k !=2 && *line == ',') // esli ne konec, to zapyataya posle chisla
				line++;
			else
				return (0);
		}
		else if (k == 2 && *line == ' ') // v konce probel
			return (1);
		else if (k !=2 && *line == ',') // esli ne konec, to zapyataya posle chisla
			line++;
		else
			return (0);
		k++;
	}
}