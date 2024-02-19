/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:47:29 by padam             #+#    #+#             */
/*   Updated: 2024/02/19 17:18:43 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l;
	char	*joint;

	l = ft_strlen(s1) + ft_strlen(s2) + 1;
	joint = malloc(l * sizeof(char));
	if (!joint)
		return (NULL);
	if (s1)
		ft_strlcpy(joint, s1, l);
	if (s2)
		ft_strlcat(joint, s2, l);
	return (joint);
}
