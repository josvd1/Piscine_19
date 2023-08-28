/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:08:41 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/11 10:32:06 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int a, int b)
{
	my_putchar(a / 10 + '0');
	my_putchar(a % 10 + '0');
	my_putchar(' ');
	my_putchar(b / 10 + '0');
	my_putchar(b % 10 + '0');
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		display(a, b);
		if (b < 99)
		{
			b++;
		}
		else
		{
			a++;
			b = a + 1;
		}
	}
}
