/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:54:12 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/14 17:40:29 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{	
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int main()
{
	int n;
	int sn;
	int *ptr;
	int *ptr1;

	n = -315130 ;
	sn =  0;
	ptr = &n;
	ptr1 = &sn;

	printf("Sa = %d, Sb = %d \n", *ptr , *ptr1);
	ft_swap(ptr,ptr1);

	printf("Pa = %d, Sb = %d \n", *ptr , *ptr1);
	return 0;
}*/
