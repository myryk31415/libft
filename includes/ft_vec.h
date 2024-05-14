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

typedef struct	s_vec
{
	double	x;
	double	y;
	double	z;
}	t_vec;

t_vec	vec_add(t_vec a, t_vec b);
t_vec	vec_sub(t_vec a, t_vec b);
t_vec	vec_mul(t_vec a, double b);
t_vec	vec_div(t_vec a, double b);

double	vec_len(t_vec a, t_vec b);
double	vec_norm(t_vec a);
double	vec_dist(t_vec a, t_vec b);

#endif
