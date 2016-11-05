/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:45:04 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 19:36:43 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		index;
	int		len;
	int		end;
	int		new_len;
	char	*trimed_s;

	index = 0;
	len = ft_strlen(s);
	end = len - 1;
	while (s[index] == ' ' || s[index] == '\n' || s[index] == '\t')
		index++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	new_len = end - index;
	if (new_len == len)
		return ((char *)s);
	if (!(trimed_s = (char *)malloc(sizeof(char) * (new_len + 1))))
		return (NULL);
	len = 0;
	while (index != end + 1)
	{
		trimed_s[len] = s[index];
		len++;
		index++;
	}
	return (trimed_s);
}
