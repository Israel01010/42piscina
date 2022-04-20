/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:44:06 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/12 19:04:07 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	print_num(int num)
{
	ft_putchar(' ');
	ft_putchar('0' + num / 10);
	ft_putchar('0' + num % 10);
}
void	ft_print_combn(int n)
{

	int		primera_d;
	int		segunda_d;
	int		max_n;
	int Dos = 2 ;
	max_n = 99;
	primera_d = -1;

//	while ( )

	while (primera_d < max_n)
	{
		primera_d++;
		segunda_d = primera_d;
		while (segunda_d < max_n)
		{
			segunda_d++;
			print_num(primera_d);
			print_num(segunda_d);
		}
	}
}
