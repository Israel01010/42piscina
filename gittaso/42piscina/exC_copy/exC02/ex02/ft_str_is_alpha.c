/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:28:16 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/21 18:50:51 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	indice;
	int	r;

	r = 0;
	indice = 0;
	if (str[indice] == '\0')
		return (1);
	while (str[indice] != '\0')
	{
		if ((str[indice] >= 'A' && str[indice] <= 'Z')
			|| (str[indice] >= 'a' && str[indice] <= 'z'))
				r = 1;
		else
			return (0);
		indice++;
	}
	return (r);
}
