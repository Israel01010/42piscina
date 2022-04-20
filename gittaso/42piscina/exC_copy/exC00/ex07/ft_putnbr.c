/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:20:18 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/12 15:42:43 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#define INT_MIN -2147483648

void	put_char(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{	
		put_char('-');
		put_char('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		put_char('-');
		nb = -nb;
	}
	if (nb <= 9)
	{
		nb = nb + '0';
		put_char(nb);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putnbr(nb % 10);
}
