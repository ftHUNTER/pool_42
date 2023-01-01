/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 02:41:30 by rchmouk           #+#    #+#             */
/*   Updated: 2022/06/26 03:10:53 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 2;
	x = nb;
	if (power != 0)
	{
		if (power < 0)
			return (0);
		else if (power == 1)
			return (nb);
		else if (power > 1)
		{
			while (i <= power)
			{
				x = x * nb;
				i++;
			}
			return (x);
		}
	}
	return (1);
}
