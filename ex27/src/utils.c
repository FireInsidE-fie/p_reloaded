/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:00:24 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 11:00:25 by estettle         ###   ########.fr       */
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

/*	ft_puterr()
 *	this function prints a string to the error output 
*/
void	ft_puterr(char *str)
{
	while (*str)
		write(2, str++, 1);
}
