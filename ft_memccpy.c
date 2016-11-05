/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:57:23 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 17:32:18 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (i < n && *(src + i) != c)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (*(src + i) == c)
	{
		*(dst + i) = c;
		return (dst + i + 1);
	}
	else
		return (NULL);
}
