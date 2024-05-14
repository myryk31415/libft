/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:11:20 by padam             #+#    #+#             */
/*   Updated: 2024/05/14 22:39:24 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

double	vec_len(t_vec vec)
{
	double	tmp;
	double	side_tmp;

	vec.x = fabs(vec.x);
	vec.y = fabs(vec.y);
	vec.z = fabs(vec.z);
	if (vec.x > vec.y)
	{
		tmp = vec.y / vec.x;
		side_tmp = vec.x * sqrt(1.0 + tmp * tmp);
	}
	else
	{
		tmp = vec.x / vec.y;
		side_tmp = vec.y * sqrt(1.0 + tmp * tmp);
	}
	if (vec.z > side_tmp)
	{
		tmp = side_tmp / vec.z;
		return (vec.z * sqrt(1.0 + tmp * tmp));
	}
	tmp = vec.z / side_tmp;
	return (side_tmp * sqrt(1.0 + tmp * tmp));
}

t_vec	vec_norm(t_vec vec)
{
	double	length;

	length = vec_length(vec);
	vec.x /= length;
	vec.y /= length;
	vec.z /= length;
	return (vec);
}

double	vec_dist(t_vec a, t_vec b)
{
	return (vec_length(vec_sub(a, b)));
}
