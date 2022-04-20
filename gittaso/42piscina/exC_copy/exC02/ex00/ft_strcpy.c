/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:00:39 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/20 12:32:30 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	index;
	int	len;

	index = 0;
	len = 0;
	while (*(src + len) != '\0')
	{
		len++;
	}
	len ++;
	while (index != len)
	{
		*(dest + index) = *(src + index);
		index++;
	}
	return (dest);
}
