/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:53:52 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/20 12:50:26 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	dif;

	i = 0;
	dif = 'a' - 'A';
	while (*(str + i) != '\0')
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			str[i] -= dif;
		}
		i++;
	}
	return (str);
}
