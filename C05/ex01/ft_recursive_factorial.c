/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glanza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 09:19:23 by glanza            #+#    #+#             */
/*   Updated: 2020/11/04 11:23:09 by glanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_recursive(int factorial, int number)
{
	factorial *= number--;
	if (number > 0)
		return (ft_recursive_factorial_recursive(factorial, number));
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial_recursive(1, nb));
}
