/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:04:11 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 17:22:37 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (i >= 0)
		{
			*(dst + i) = *(src + i);
			i--;
		}
	}
	return (dst);
}
