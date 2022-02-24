/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:35:15 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/10 12:35:21 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	size1;
	int	size2;

	i = 0;
	size1 = ft_strlen(src);
	size2 = ft_strlen(dest);
	while (i < size1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size2)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
