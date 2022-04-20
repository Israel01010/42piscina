/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:25:27 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/03 18:39:00 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	inicio_alph;
	char	final_alph;
	char	indice;

	inicio_alph = 'a';
	final_alph = 'z';
	indice = final_alph;
	while (indice >= inicio_alph)
	{
		write(1, &indice, 1);
		indice--;
	}
}
