/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:28:16 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/20 12:37:59 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	indice;
	int	r;

	indice = 0;
	r = 1;
	if (*str == '\0')
		return (1);
	while (*(str + indice) != '\0')
	{
		if (str[indice] <= 'A' || (str[indice] >= 'Z'
				&& str[indice] < 'a') || str[indice] > 'z')
			return (0);
		indice++;
	}
	return (r);
}
