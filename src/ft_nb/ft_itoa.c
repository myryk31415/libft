/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:34:55 by padam             #+#    #+#             */
/*   Updated: 2024/08/24 09:06:06 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	count_digits(long n)
{
	int	bytes;

	bytes = (n <= 0);
	while (n)
	{
		n /= 10;
		bytes++;
	}
	return (bytes);
}

static int	ucount_digits(unsigned long n)
{
	int	bytes;

	bytes = (n <= 0);
	while (n)
	{
		n /= 10;
		bytes++;
	}
	return (bytes);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	num;
	int		l;

	num = n;
	l = count_digits(num);
	ptr = malloc(l + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[l] = '\0';
	if (num < 0)
	{
		num *= -1;
		ptr[0] = '-';
	}
	if (num == 0)
		ptr[0] = '0';
	while (num)
	{
		ptr[--l] = '0' + num % 10;
		num /= 10;
	}
	return (ptr);
}

char	*ft_ultoa(unsigned long n)
{
	char			*ptr;
	int				l;

	l = ucount_digits(n);
	ptr = malloc(l + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[l] = '\0';
	if (n == 0)
		ptr[0] = '0';
	while (n)
	{
		ptr[--l] = '0' + n % 10;
		n /= 10;
	}
	return (ptr);
}

//TODO EDGECASE CHECK
char	*ft_ltoa(long n)
{
	char	*ptr;
	int		l;

	l = count_digits(n);
	if (n == LONG_MIN)
		ptr = ft_strdup("-9223372036854775808");
	if (n == LONG_MIN)
		return (ptr);
	ptr = malloc(l + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[l] = '\0';
	if (n < 0)
	{
		n *= -1;
		ptr[0] = '-';
	}
	if (n == 0)
		ptr[0] = '0';
	while (n)
	{
		ptr[--l] = '0' + n % 10;
		n /= 10;
	}
	return (ptr);
}
