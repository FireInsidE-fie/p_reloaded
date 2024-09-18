/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@email.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:58:28 by estettle          #+#    #+#             */
/*   Updated: 2024/09/18 22:02:29 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int i;

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
