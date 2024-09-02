/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 08:22:53 by padam             #+#    #+#             */
/*   Updated: 2024/09/03 01:16:31 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief joins a string array into a long string
 * @return the new allocated string, `NULL` on error
 */
char	*ft_arrjoin(char **arr, char *delimiter)
{
	int		len;
	int		i;
	char	*joined_string;

	i = 0;
	len = 0;
	if (!arr)
		return (NULL);
	while (arr[i])
		len += ft_strlen(arr[i++]);
	len += (len - 1) * ft_strlen(delimiter);
	joined_string = ft_calloc(len, 1);
	while (*arr)
	{
		ft_strlcat(joined_string, *arr, len);
		arr++;
		if (delimiter && *arr)
			ft_strlcat(joined_string, delimiter, len);
	}
	return (joined_string);
}
