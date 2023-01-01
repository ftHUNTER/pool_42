/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:12:19 by rchmouk           #+#    #+#             */
/*   Updated: 2022/06/20 22:49:04 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	pn;
	int	ruslt;

	i = 0;
	pn = 1;
	ruslt = 0;
	while (str[i])
	{
		if (!((str[i] <= 13 && str[i] >= 9) || str[i] == 32))
			break ;
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			pn = pn * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ruslt = ruslt * 10 + str[i] - 48;
		i++;
	}
	return (pn * ruslt);
}
