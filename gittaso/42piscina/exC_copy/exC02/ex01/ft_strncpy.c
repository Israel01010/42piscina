/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:37:21 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/21 18:37:31 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	index;
	int	len;
	int	max_n;

	max_n = n;
	index = 0;
	len = 0;
	while (*(src + len) != '\0')
	{
		len++;
	}
	len ++;
	if (max_n > len)
	{
		return (0);
	}
	while (index < (max_n + 1))
	{
		*(dest + index) = *(src + index);
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
