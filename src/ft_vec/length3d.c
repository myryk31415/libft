/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:11:20 by padam             #+#    #+#             */
/*   Updated: 2024/05/15 12:19:56by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

double	vec3d_len(t_vec3d vec3d)
{
	double	side_tmp;

	side_tmp = ft_magnitude(vec3d.x, vec3d.y);
	return (ft_magnitude(side_tmp, vec3d.z));
}

t_vec3d	vec3d_norm(t_vec3d vec3d)
{
	double	length;

	length = vec3d_len(vec3d);
	vec3d.x /= length;
	vec3d.y /= length;
	vec3d.z /= length;
	return (vec3d);
}

double	vec3d_dist(t_vec3d a, t_vec3d b)
{
	return (vec3d_len(vec3d_sub(a, b)));
}
