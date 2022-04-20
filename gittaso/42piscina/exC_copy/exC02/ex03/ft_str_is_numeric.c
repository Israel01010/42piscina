/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:50:54 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/14 16:06:17 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	indice;

	indice = 0;
	if (*(str + indice) == '\0')
		return (1);
	while (*(str + indice) != '\0')
	{
		if (*(str + indice) < '0' || *(str + indice) > '9')
			return (0);
		indice++;
	}
	return (1);
}
