/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:57:03 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:57:05 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
		ft_putchar(i++);
}
/*
int	main(void)
{
	ft_print_alphabet();
	return(0);
}
*/
