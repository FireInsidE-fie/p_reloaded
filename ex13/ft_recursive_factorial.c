/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:59:00 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:59:01 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(3));
}
*/
