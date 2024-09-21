/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:07:06 by estettle          #+#    #+#             */
/*   Updated: 2024/09/21 15:08:23 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*	ft_strlen()
 *	this function puts a string on the standard output
*/
void	ft_strlen(char *str)
{
	while (*str)
		write(1, str++, 1);
}
