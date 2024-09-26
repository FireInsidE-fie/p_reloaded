/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:59:30 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:59:31 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s2;
	*s2 = *s1;
	*s1 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_sort(int size, char **strings)
{
	int		i;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(strings[i], strings[i + 1]) > 0)
		{
			ft_swap(&strings[i], &strings[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	return (strings);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
