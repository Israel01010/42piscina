/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:28:18 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/14 17:57:44 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		contador++;
	}
	return (contador);
}
/*
int main()
{
	int count;
	char* palabra;

	palabra = "Aparcacoches";	

	count =	ft_strlen(palabra);
	printf("%d", count);
}*/
