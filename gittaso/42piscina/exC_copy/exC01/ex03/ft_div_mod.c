/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:48:36 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/14 17:44:28 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main()
{
	int a;
	int b;
	int *divi;
	int *modu;
	int resul;
	int resul1;
	divi = &resul;
	modu = &resul1;
	a = 59;
	b =13;

	ft_div_mod(a,b, divi,modu);

	printf("------------------\n");
	printf("resultado div: %d \n",*divi);
	printf("resultado modulo: %d \n",*modu);
}*/
