/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arr_one_or_four.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:41:08 by rlinares          #+#    #+#             */
/*   Updated: 2020/11/01 21:41:29 by rlinares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_fill_arr_one_or_four(int num)
{
	int		*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(int) * 4);
	while (i < 4)
	{
		if (num == 4)
			arr[i] = i + 1;
		else if (num == 1)
		{
			if (i == 0)
				arr[i] = 4;
			else
				arr[i] = 0;
		}
		else
			arr[i] = 0;
		i++;
	}
	return (arr);
}
