/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweizman <aweizman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:11:20 by padam             #+#    #+#             */
/*   Updated: 2024/05/31 17:16:48 by aweizman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

double	vec2d_len(t_vec2d vec2d)
{
	return (ft_magnitude(vec2d.x, vec2d.y));
}

t_vec2d	vec2d_norm(t_vec2d vec2d)
{
	double	length;

	length = vec2d_len(vec2d);
	vec2d = vec2d_div(vec2d, length);
	return (vec2d);
}

double	vec2d_dist(t_vec2d a, t_vec2d b)
{
	return (vec2d_len(vec2d_sub(a, b)));
}

double	vec2d_getrot(t_vec2d a)
{
	return (atan2(a.y, a.x));
}
