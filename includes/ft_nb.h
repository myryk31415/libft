/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:23:30 by padam             #+#    #+#             */
/*   Updated: 2024/08/24 09:06:52 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NB_H
# define FT_NB_H

int		ft_abs_int(int n);
long	ft_abs_long(long n);
double	ft_abs_double(double n);

/**
 * @brief Converts a string to an integer.
*/
int		ft_atoi(const char *str);
int		ft_isint(char *str);
int		ft_isnumber(char *str);
char	*ft_itoa(int n);
char	*ft_ltoa(long n);
char	*ft_ultoa(unsigned long n);

#endif
