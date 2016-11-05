/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:28:15 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 19:51:34 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0 && *((unsigned char *)s) != (unsigned char)c)
	{
		s++;
		n--;
	}
	if (*((unsigned char *)s) == (unsigned char)c)
		return ((void *)s);
	else
		return (NULL);
}
