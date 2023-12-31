/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:04:17 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/10 13:20:18 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while ((str[i]) && (a == 1))
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
		{
			if ((str[i] < 'a') || (str[i] > 'z'))
			{
				a = 0;
			}
		}
		i++;
	}	
	return (a);
}
