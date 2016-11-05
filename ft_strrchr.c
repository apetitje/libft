/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:45:17 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 19:42:19 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	c = (char)c;
	s = s + len + 1;
	while (len + 1 > 0 && *s != c)
	{
		len--;
		s--;
	}
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
