/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweizman <aweizman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:05:34 by padam             #+#    #+#             */
/*   Updated: 2024/05/31 17:16:41 by aweizman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2d	vec2d_add(t_vec2d a, t_vec2d b)
{
	t_vec2d	result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return (result);
}

t_vec2d	vec2d_sub(t_vec2d a, t_vec2d b)
{
	t_vec2d	result;

	result.x = a.x - b.x;
	result.y = a.y - b.y;
	return (result);
}

t_vec2d	vec2d_mul(t_vec2d a, double b)
{
	t_vec2d	result;

	result.x = a.x * b;
	result.y = a.y * b;
	return (result);
}

t_vec2d	vec2d_div(t_vec2d a, double b)
{
	t_vec2d	result;

	result.x = a.x / b;
	result.y = a.y / b;
	return (result);
}

t_vec2d	vec2d_rot(t_vec2d a, double angle)
{
	t_vec2d	result;

	result.x = a.x * cos(angle) + a.y * -sin(angle);
	result.y = a.x * sin(angle) + a.y * cos(angle);
	return (result);
}
