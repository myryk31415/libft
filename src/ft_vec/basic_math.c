/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_math.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:05:34 by padam             #+#    #+#             */
/*   Updated: 2024/05/14 22:08:53 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec	vec_add(t_vec a, t_vec b)
{
	t_vec	result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	return (result);
}

t_vec	vec_sub(t_vec a, t_vec b)
{
	t_vec	result;

	result.x = a.x - b.x;
	result.y = a.y - b.y;
	result.z = a.z - b.z;
	return (result);
}

t_vec	vec_mul(t_vec a, double b)
{
	t_vec	result;

	result.x = a.x * b;
	result.y = a.y * b;
	result.z = a.z * b;
	return (result);
}

t_vec	vec_div(t_vec a, double b)
{
	t_vec	result;

	result.x = a.x / b;
	result.y = a.y / b;
	result.z = a.z / b;
	return (result);
}
