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


double	vec_len(t_vec vec)
{
	double	side_tmp;

	side_tmp = ft_magnitude(vec.x, vec.y);
	return (ft_magnitude(side_tmp, vec.z));
}

t_vec	vec_norm(t_vec vec)
{
	double	length;

	length = vec_len(vec);
	vec.x /= length;
	vec.y /= length;
	vec.z /= length;
	return (vec);
}

double	vec_dist(t_vec a, t_vec b)
{
	return (vec_len(vec_sub(a, b)));
}