/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glanza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:19:23 by glanza            #+#    #+#             */
/*   Updated: 2020/11/09 18:51:48 by glanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (++index < argc)
	{
		ft_putstr(argv[index]);
		ft_putstr("\n");
	}
}
