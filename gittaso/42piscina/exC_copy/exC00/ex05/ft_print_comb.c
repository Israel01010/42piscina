/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:38:42 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/11 19:35:40 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_numbers(int c, int d, int u, int index)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != (index - 2) || d != (index - 1) || u != index)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;
	int	index_f;

	index_f = '9';
	c = '0';
	while (c <= (index_f - 2))
	{
		d = c + 1;
		while (d <= (index_f - 1))
		{
			u = d + 1;
			while (u <= (index_f))
			{
				write_numbers(c, d, u, index_f);
				u++;
			}
			d++;
		}
		c++;
	}
}
