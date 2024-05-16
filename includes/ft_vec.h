/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:56:56 by padam             #+#    #+#             */
/*   Updated: 2024/05/14 21:11:09by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VEC_H
# define FT_VEC_H

typedef struct	s_vec3d
{
	double	x;
	double	y;
	double	z;
}	t_vec3d;

typedef struct	s_vec2d
{
	double	x;
	double	y;
}	t_vec2d;

// 3d
t_vec3d	vec3d_add(t_vec3d a, t_vec3d b);
t_vec3d	vec3d_sub(t_vec3d a, t_vec3d b);
t_vec3d	vec3d_mul(t_vec3d a, double b);
t_vec3d	vec3d_div(t_vec3d a, double b);

double	vec3d_len(t_vec3d vec3d);
t_vec3d	vec3d_norm(t_vec3d vec3d);
double	vec3d_dist(t_vec3d a, t_vec3d b);

//2d
t_vec2d	vec2d_add(t_vec2d a, t_vec2d b);
t_vec2d	vec2d_sub(t_vec2d a, t_vec2d b);
t_vec2d	vec2d_mul(t_vec2d a, double b);
t_vec2d	vec2d_div(t_vec2d a, double b);

double	vec2d_len(t_vec2d vec2d);
t_vec2d	vec2d_norm(t_vec2d vec2d);
double	vec2d_dist(t_vec2d a, t_vec2d b);

#endif
