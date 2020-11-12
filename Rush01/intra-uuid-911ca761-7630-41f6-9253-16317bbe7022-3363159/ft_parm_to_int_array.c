/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parm_to_int_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:31:28 by rlinares          #+#    #+#             */
/*   Updated: 2020/11/01 21:39:01 by rlinares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ctoi(char c)
{
	if (c >= '1' && c <= '4')
		return (c - '0');
	else
		return (0);
}

int		*ft_parm_to_int_array(char *str, int n_int)
{
	int		*arr;
	int		i;
	int		k;

	i = 0;
	k = 0;
	arr = (int *)malloc(sizeof(int) * n_int);
	while (str[i])
	{
		if (ft_ctoi(str[i]) > 0 && k < n_int)
		{
			arr[k] = str[i] - '0';
			k++;
		}
		i++;
	}
	return (arr);
}
