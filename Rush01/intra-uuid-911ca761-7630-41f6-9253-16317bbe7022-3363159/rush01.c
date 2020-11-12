/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 10:10:10 by rlinares          #+#    #+#             */
/*   Updated: 2020/11/01 21:45:33 by rlinares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_parm_to_int_array(char *str, int n_int);

void	*ft_fill_arr_one_or_four(int num);

void	ft_print(int *arr)
{
	int		i;
	char	c;

	i = 0;
	while (i < 4)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int		ft_is_complete_line(int *arr)
{
	int i;
	int sum;
	int count;

	i = 0;
	sum = 0;
	count = 0;
	while (i < 4)
	{
		sum = sum + arr[i];
		i++;
	}
	if (sum == 10)
		return (1);
	return (0);
}

int		ft_count_zero(int *arr, int size)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] == 0)
			count++;
		i++;
	}
	return (count);
}

int		ft_validate_line(int *arr, int side)
{
	int i;
	int sum;

	i = 0;
	while (i < side)
	{
		if (arr[i] == 0)
			return (0);
		sum = sum + arr[i];
		i++;
	}
	if (sum == 10)
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int matrix[4][4];
	int *arr_gn;
	int i;
	int k;
	int *sub_arr;

	if (argc != 2)
		return (0);
	if (argv[1])
		arr_gn = (int *)ft_parm_to_int_array(argv[1], 16);
	i = 0;
	while (i < 4)
	{
		k = 0;
		while (k < 4)
		{
			matrix[k][i] = 0;
			k++;
		}
		i++;
	}
	i = 0;
	while (i < 16)
	{
		sub_arr = ft_fill_arr_one_or_four(arr_gn[i]);
		k = 0;
		while (k < 4)
		{
			if (i >= 0 && i <= 3)
			{
				if (matrix[k][i] == 0 && sub_arr[k] != 0)
					matrix[k][i] = sub_arr[k];
			}
			else if (i >= 4 && i <= 7)
			{
				if (matrix[3 - k][i - 4] == 0 && sub_arr[k] != 0)
					matrix[3 - k][i - 4] = sub_arr[k];
			}
			else if (i >= 8 && i <= 11)
			{
				if (matrix[i - 8][k] == 0 && sub_arr[k] != 0)
					matrix[i - 8][k] = sub_arr[k];
			}
			else if (i >= 12 && i <= 15)
			{
				if (matrix[i - 12][3 - k] == 0 && sub_arr[k] != 0)
					matrix[i - 12][3 - k] = sub_arr[k];
			}
			k++;
		}
		free(sub_arr);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		ft_print(matrix[i]);
		i++;
	}
	return (0);
}
