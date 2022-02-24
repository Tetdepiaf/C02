/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:51:23 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/14 15:51:25 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_hexa(char c)
{
	char	*liste_hexa;

	liste_hexa = "0123456789abcdef";
	if (c >= 16)
	{
		convert_hexa(c / 16);
		convert_hexa(c % 16);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(liste_hexa[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			convert_hexa(str[i]);
		}
		i++;
	}
}
