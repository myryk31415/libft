/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 03:50:49 by padam             #+#    #+#             */
/*   Updated: 2024/08/31 07:41:36 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_path_append(char *path, char *name)
{
	int		len;
	int		path_len;
	char	*combined;
	int		add_slash;

	add_slash = 0;
	if (!name && !path)
		return (NULL);
	if (!name)
		return (ft_strdup(path));
	if (!path)
		return (ft_strdup(name));
	path_len = ft_strlen(path);
	if (path[path_len -1] != '/')
		add_slash = 1;
	len = path_len + ft_strlen(name) + add_slash + 1;
	combined = ft_calloc(len, sizeof(char));
	if (!combined)
		return (NULL);
	ft_strlcpy(combined, path, len);
	if (add_slash)
		ft_strlcat(combined, "/", len);
	ft_strlcat(combined, name, len);
	return (combined);
}
