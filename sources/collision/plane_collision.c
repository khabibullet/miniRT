/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:21:05 by enoye             #+#    #+#             */
/*   Updated: 2022/06/29 14:27:26 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ray.h"
#include "../../headers/scene.h"
#include "../../headers/vector.h"
#include <math.h>

int	collide_plane(t_ray *ray, t_plane *plane)
{
	t_vec	collision;
	float	t;

	collision = subtract_vecs(ray->origin, plane->coords);
	t = -dot_product(collision, plane->normal)
		/ dot_product(ray->coords, plane->normal);
	if (t <= 0)
		return (0);
	collision.x = ray->origin.x + ray->coords.x * t;
	collision.y = ray->origin.y + ray->coords.y * t;
	collision.z = ray->origin.z + ray->coords.z * t;
	return (collision);
}
