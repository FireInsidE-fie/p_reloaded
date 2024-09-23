/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:07:06 by estettle          #+#    #+#             */
/*   Updated: 2024/09/23 10:27:34 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*	ft_strlen()
 *	this function returns a string's length
*/
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

/*	ft_putstr()
 *	this function prints a string to stdout 
*/
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
