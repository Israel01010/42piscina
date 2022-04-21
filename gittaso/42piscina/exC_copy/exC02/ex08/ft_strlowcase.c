/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:36:50 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/21 18:48:43 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strlowcase(char *str)
{	
	int	i;
	int	dif;

	i = 0;
	dif = 'a' - 'A';
	while (*(str + i) != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += dif;
		}
		i++;
	}
	return (str);
}
