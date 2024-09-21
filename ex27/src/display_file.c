/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:01:12 by estettle          #+#    #+#             */
/*   Updated: 2024/09/21 15:10:05 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*	ft_err()
 *	error handling is done here, displaying a different message depending
 *	on the integer the function receives as an error number
*/
void	ft_err(int err_nb)
{
	if (err_nb == 1)
		ft_putstr("File name missing.");
	else if (err_nb == 2)
		ft_putstr("Too many arguments.");
	else if (err_nb == 3)
		ft_putstr("Cannot read file.");
}

int	main(int argc, char **argv)
{
	if (argc == 0)
	{
		ft_err(1);
		return(1);
	}
	else if (argc > 2)
	{
		ft_err(2);
		return(2);
	}
}
