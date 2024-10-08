/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:46:48 by padam             #+#    #+#             */
/*   Updated: 2024/08/11 06:36:48 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}

void	*ft_calloc_null(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size + 1);
	if (ptr)
		ft_bzero(ptr, count * size + 1);
	return (ptr);
}
