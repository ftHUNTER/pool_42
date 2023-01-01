/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 03:57:56 by rchmouk           #+#    #+#             */
/*   Updated: 2022/06/26 05:09:45 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	x;
	long int	i;

	i = 1;
	x = (long int) nb;
	if (x <= 0)
		return (0);
	while (i * i <= x)
	{
		if (i * i == x)
			return (i);
		i++;
	}
	return (0);
}