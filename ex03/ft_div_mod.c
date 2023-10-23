/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:24:11 by fizad             #+#    #+#             */
/*   Updated: 2023/08/09 14:25:05 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 5;

	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
}
*/
