/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:44:14 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/10 13:44:17 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i] && i < size - 1 && size > 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] && size > 0)
	{
		dest[i] = '\0';
		i++;
	}
	if (size > ft_strlen(dest) || size <= 0)
		j = ft_strlen(src);
	else
		j = size;
	return (j);
}
