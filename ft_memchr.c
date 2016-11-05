/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:28:15 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 17:32:16 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	c = (unsigned char)c;
	while (n > 0 && *src != c)
	{
		src++;
		n--;
	}
	if (*src == c)
		return (src);
	else
		return (NULL);

}
