/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:25:47 by fizad             #+#    #+#             */
/*   Updated: 2023/08/14 17:08:39 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result_a;
	int	result_b;

	result_a = *a / *b;
	result_b = *a % *b;
	*a = result_a;
	*b = result_b;
}
