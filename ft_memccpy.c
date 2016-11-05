/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:57:23 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 19:59:10 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *((unsigned char *)(src + i)) != (unsigned char)c)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		i++;
	}
	if (*((unsigned char *)(src + i)) == (unsigned char)c)
	{
		*((unsigned char *)(dst + i)) = (unsigned char)c;
		return (dst + i + 1);
	}
	else
		return (NULL);
}
