/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:44:19 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/21 18:52:08 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = str[i] - 32 ;
		}
		i++;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i - 1] <= 'Z' && str[i - 1] > 'A')
				|| (str[i - 1] <= '9' && str[i - 1] >= '0')
				|| (str[i - 1] <= 'z' && str[i - 1] >= 'a'))
			&& (str[i] <= 'Z' && str[i] >= 'A'))
		{	
			str[i] += 32 ;
		}
		i++;
	}
	return (str);
}
