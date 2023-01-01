/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 03:35:51 by rchmouk           #+#    #+#             */
/*   Updated: 2022/06/19 21:55:58 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_size(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sd;
	unsigned int	ss;
	unsigned int	i;
	unsigned int	j;

	sd = ft_size(dest);
	ss = ft_size(src);
	i = 0;
	j = sd;
	if (size == 0 || size <= sd)
	{
		return (ss + size);
	}
	while (src[i] && i < size - sd - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sd + ss);
}
