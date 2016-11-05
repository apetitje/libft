/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:57:25 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 14:19:16 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dst);
	while (*src && i < size - 1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	if (i == ft_strlen(dst) + ft_strlen(src))
	{
		dst[i] = '\0';
		return (i);
	}
	else
		return (ft_strlen(src) + size - 1);
}
