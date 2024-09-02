/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:30:46 by padam             #+#    #+#             */
/*   Updated: 2024/09/03 01:17:12 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdbool.h"

int	ft_length(void *arr, int size)
{
	bool	*cast;
	int		i;

	cast = (bool *)arr;
	i = 0;
	while (cast[i * size])
		i++;
	return (i);
}
