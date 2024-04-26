/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:25:28 by padam             #+#    #+#             */
/*   Updated: 2024/04/26 20:51:19 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s);
	if (!s || !set)
		return ((ft_strdup(s)));
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	while (s[end] && ft_strchr(set, s[end]))
		end--;
	return (ft_substr((s), start, end - start + 1));
}
