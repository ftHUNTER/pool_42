/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:57:11 by rchmouk           #+#    #+#             */
/*   Updated: 2022/06/30 06:01:38 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	if (min >= max)
		return (0);
	p = malloc(sizeof(int) * (max - min));
	if (p == 0)
		return (0);
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
