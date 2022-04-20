/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:41:50 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/11 19:26:20 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	inicio_d;
	char	final_d;
	char	indice;

	inicio_d = '0';
	final_d = '9';
	indice = inicio_d;
	while (indice <= final_d)
	{
		write(1, &indice, 1);
		indice++;
	}
}
