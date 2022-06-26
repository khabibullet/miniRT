/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_product.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:17:02 by anemesis          #+#    #+#             */
/*   Updated: 2022/06/26 17:41:52 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

t_vec	cross_product(t_vec vec1, t_vec vec2)
{
	t_vec	prod;

	prod.x = vec1.y * vec1.z - vec1.z * vec2.y;
	prod.y = vec1.z * vec1.x - vec1.x * vec2.z;
	prod.z = vec1.x * vec1.y - vec1.z * vec2.y;
	return (prod);
}
