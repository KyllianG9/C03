/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:53:49 by kgarcia           #+#    #+#             */
/*   Updated: 2023/07/12 20:48:07 by kgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;
	int	a;

	i = 0;
	n = 0;
	a = 0;
	if (to_find[n] == '\0')
		return (str);
	while (to_find[n])
		n++;
	while (str[i])
	{
		a = 0;
		while (str[i] && str[i++] == to_find[a++])
		{
			if (to_find[a] == '\0')
				return (&str[i - a]);
		}
	}
	return (0);
}
/*
int main()
{
    char str[] = "Bonjour, comment ça va ?";
    char to_find[] = "jour";

    printf("%s", ft_strstr(str,to_find));
}*/
