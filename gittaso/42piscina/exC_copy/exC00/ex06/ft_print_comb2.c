/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:06:05 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/12 17:25:03 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdbool.h>

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

bool	check_last(int a, int c, bool r)
{
	if (a == (c - 1))
	{
		r = true;
	}
	else
	{
		r = false;
	}
	return (r);
}

