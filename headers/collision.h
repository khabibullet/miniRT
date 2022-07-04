/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collision.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <enoye@clown.ru>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:16:36 by anemesis          #+#    #+#             */
/*   Updated: 2022/07/04 12:34:32 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLISION_H
# define COLLISION_H

# include "scene.h"
# include "ray.h"
# include "vector.h"

int		collide_sphere(t_ray *ray, t_sphere *sphere);
int		collide_plane(t_ray *ray, t_plane *plane);
int		collide_poly(t_ray *ray, t_poly *poly);
void	get_all_collisions(t_minirt *rt);

#endif