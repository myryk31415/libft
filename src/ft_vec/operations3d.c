/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_math.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:05:34 by padam             #+#    #+#             */
/*   Updated: 2024/05/16 22:31:18 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3d	vec3d_add(t_vec3d a, t_vec3d b)
{
	t_vec3d	result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	return (result);
}

t_vec3d	vec3d_sub(t_vec3d a, t_vec3d b)
{
	t_vec3d	result;

	result.x = a.x - b.x;
	result.y = a.y - b.y;
	result.z = a.z - b.z;
	return (result);
}

t_vec3d	vec3d_mul(t_vec3d a, double b)
{
	t_vec3d	result;

	result.x = a.x * b;
	result.y = a.y * b;
	result.z = a.z * b;
	return (result);
}

t_vec3d	vec3d_div(t_vec3d a, double b)
{
	t_vec3d	result;

	result.x = a.x / b;
	result.y = a.y / b;
	result.z = a.z / b;
	return (result);
}
