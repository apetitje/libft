/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:34:00 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/06 12:18:12 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		is_same;

	is_same = 1;
	if (n == 0)
		return (0);
	while (n > 0 && *((unsigned char *)s1) && *((unsigned char *)s2))
	{
		if (*((unsigned char *)s1) != *((unsigned char *)s2))
		{
			is_same = 0;
		}
		if (is_same == 1)
		{
			s1++;
			s2++;
		}
		n--;
	}
	if (*((unsigned char *)s1) == *((unsigned char *)s2))
		return (0);
	else
		return (*((unsigned char *)s1) - *((unsigned char *)s2));
}
