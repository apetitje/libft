/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:42:49 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 16:47:06 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
