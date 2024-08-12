/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 03:50:49 by padam             #+#    #+#             */
/*   Updated: 2024/08/12 19:30:13 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_path_append(char *path, char *name)
{
	int		len;
	char	*combined;

	len = ft_strlen(path) + ft_strlen(name) + 2;
	combined = ft_calloc(len, sizeof(char));
	if (!combined)
		return (NULL);
	ft_strlcpy(combined, path, len);
	ft_strlcat(combined, "/", len);
	ft_strlcat(combined, name, len);
	return (combined);
}
