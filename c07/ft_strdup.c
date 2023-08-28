/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:35:45 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/16 14:07:09 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*str;
	char	*pt;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	str = malloc(i + 1);
	pt = str;
	while (*src)
	{
		*pt++ = *src++;
	}
	*pt = '\0';
	return (str);
}
