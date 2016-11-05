/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:50:04 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 17:59:20 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (little[i] = '\0')
		return (big);
	while (big[i] != '\0')
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
				return (big + i - j);
			else
			{
				i = i - j + 1;
				j = 0;
			}
		}
	}
	return (NULL);
}
