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
/*
 *@brief Add two 3D vectors
 *@param a The first vector
 *@param b The second vector
 *@return The sum of the two vectors
*/
t_vec3d	vec3d_add(t_vec3d a, t_vec3d b);

/*
 *@brief Subtract two 3D vectors
 *@param a The vector to subtract from
 *@param b The vector to subtract
 *@return The difference of the two vectors
*/
t_vec3d	vec3d_sub(t_vec3d a, t_vec3d b);

/*
 *@brief Multiply a 3D vector by a scalar
 *@param a The vector to multiply
 *@param b The scalar to multiply by
 *@return The scaled vector
*/
t_vec3d	vec3d_mul(t_vec3d a, double b);

/*
 *@brief Divide a 3D vector by a scalar
 *@param a The vector to divide
 *@param b The scalar to divide by
 *@return The scaled vector
*/
t_vec3d	vec3d_div(t_vec3d a, double b);

/*
 *@brief Rotate a 3D vector clockwise by an angle
 *@param a The vector to rotate
 *@param angle The angle in radians
 *@return The rotated vector
*/
double	vec3d_len(t_vec3d vec3d);

/*
 *@brief Get the length of a 3D vector
 *@param vec3d The vector to get the length of
 *@return The length of the vector
*/
t_vec3d	vec3d_norm(t_vec3d vec3d);

/*
 *@brief Get the normalized vector of a 3D vector
 *@param vec3d The vector to normalize
 *@return The normalized vector
*/
double	vec3d_dist(t_vec3d a, t_vec3d b);

// 2d
/*
 *@brief Add two 2D vectors
 *@param a The first vector
 *@param b The second vector
 *@return The sum of the two vectors
*/
t_vec2d	vec2d_add(t_vec2d a, t_vec2d b);

/*
 *@brief Subtract two 2D vectors
 *@param a The vector to subtract from
 *@param b The vector to subtract
 *@return The difference of the two vectors
*/
t_vec2d	vec2d_sub(t_vec2d a, t_vec2d b);

/*
 *@brief Multiply a 2D vector by a scalar
 *@param a The vector to multiply
 *@param b The scalar to multiply by
 *@return The scaled vector
*/
t_vec2d	vec2d_mul(t_vec2d a, double b);

/*
 *@brief Divide a 2D vector by a scalar
 *@param a The vector to divide
 *@param b The scalar to divide by
 *@return The scaled vector
*/
t_vec2d	vec2d_div(t_vec2d a, double b);

/*
 *@brief Rotate a 2D vector clockwise by an angle
 *@param a The vector to rotate
 *@param angle The angle in radians
 *@return The rotated vector
*/
t_vec2d	vec2d_rot(t_vec2d a, double angle);

/*
 *@brief Get the length of a 2D vector
 *@param vec2d The vector to get the length of
 *@return The length of the vector
*/
double	vec2d_len(t_vec2d vec2d);

/*
 *@brief Get the normalized vector of a 2D vector
 *@param vec2d The vector to normalize
 *@return The normalized vector
*/
t_vec2d	vec2d_norm(t_vec2d vec2d);

/*
 *@brief Get the distance between two points represented by 2D vectors
 *@param a The first vector
 *@param b The second vector
 *@return The distance between the two points
*/
double	vec2d_dist(t_vec2d a, t_vec2d b);

#endif
