/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:55:34 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/20 19:50:24 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	len(char *l)
{
	int	i;

	i = 0;
	while (l[i] != '\0')
		i++;
	return (i);
}


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	len1;
	int	len2;

	i = 0;
	len1 = len(s1);
	len2 = len(s2);
	
	if (n == 0)
		return (0);

	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (len1 < len2)
		{	printf("len1:%d  len2:%d \n",len1,len2);return (-1);}
		else if (len2 < len1)
		{	printf("len1:%d  len2:%d \n",len1,len2);return (1);}
		 /*if (s1[i] == s2[i])
			return (0);*/
		i++;
	}
	return (0);
}
