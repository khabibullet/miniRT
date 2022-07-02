/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_rt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:01:10 by anemesis          #+#    #+#             */
/*   Updated: 2022/06/29 16:31:53 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"
#include "../../headers/test.h"

void	parse_rt(int argc, char **argv, t_minirt *rt)
{
	(void)argc;
	(void)argv;
	set_test_scene(rt);
	// count_objects(rt);
	alloc_objects_arrays(rt);
	put_test_primitives(rt);
	alloc_rays_array(rt);
	alloc_tmp_collisions_array(rt);
	init_window_and_buffers(rt);
	// test_collision(&rt);
	// swap_buffers(&rt);
}
