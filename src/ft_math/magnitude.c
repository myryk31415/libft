/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magnitude.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:26:02 by padam             #+#    #+#             */
/*   Updated: 2024/05/15 13:03:43 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

double	ft_magnitude(double a, double b)
{
	double	tmp;

	a = fabs(a);
	b = fabs(b);
	if (a > b)
	{
		tmp = b / a;
		return (a * sqrt(1.0 + tmp * tmp));
	}
	if (b == 0.0)
		return (0.0);
	tmp = a / b;
	return (b * sqrt(1.0 + tmp * tmp));
}
