/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:59:38 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 19:39:36 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while (big[i] && little[j] && big[i] != little[j])
			i++;
		if (big[i] == little[j])
		{
			while (big[i] == little[j])
			{
				i++;
				j++;
			}
			if (little[j] == '\0')
				return ((char *)big + i - j);
			else
			{
				i = i - j + 1;
				j = 0;
			}
		}
	}
	return (NULL);

}
