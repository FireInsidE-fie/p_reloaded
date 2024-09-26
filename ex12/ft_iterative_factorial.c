/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:58:56 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:58:56 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (nb > 0)
		i *= nb--;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_factorial(30));
	return (0);
}
*/
