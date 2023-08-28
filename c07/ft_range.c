/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:10:57 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/18 17:51:47 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	diff;

	diff = max - min;
	if (min >= max)
		return (NULL);
	i = 0;
	tab = malloc(diff * sizeof(int));
	if (tab == NULL)
		return (0);
	while (i < diff)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
