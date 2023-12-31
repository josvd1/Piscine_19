/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:36:07 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/10 10:52:47 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_comb(void)
{
	char	i[3];

	i[0] = '0';
	while (i[0] <= '9')
	{
		i[1] = i[0] + 1;
		while (i[1] <= '9')
		{
			i[2] = i[1] + 1;
			while (i[2] <= '9')
			{
				write(1, &i[0], 1);
				write(1, &i[1], 1);
				write(1, &i[2], 1);
				if (i[0] != '7' || i[1] != '8' || i[2] != '9')
				{
					write(1, ", ", 2);
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
