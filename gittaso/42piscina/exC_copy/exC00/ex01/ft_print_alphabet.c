/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:17:24 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/03 18:20:38 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	inicio_alph;
	char	final_alph;
	char	indice;

	inicio_alph = 'a';
	final_alph = 'z';
	indice = inicio_alph;
	while (indice <= final_alph)
	{
		write(1, &indice, 1);
		indice++;
	}
}
