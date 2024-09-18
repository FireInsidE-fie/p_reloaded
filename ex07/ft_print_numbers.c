/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@email.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:03:24 by estettle          #+#    #+#             */
/*   Updated: 2024/09/18 22:05:05 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
		ft_putchar(i++);
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
