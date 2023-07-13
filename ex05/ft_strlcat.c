/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:49:22 by kgarcia           #+#    #+#             */
/*   Updated: 2023/07/13 09:30:07 by kgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	destlen = 0;
	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (dest[destlen])
		destlen++;
	while (src[i] && destlen + i < (size - 1))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	if (i < size)
		dest[destlen + i] = '\0';
	if (destlen > size)
		return (srclen + size);
	return (destlen + srclen);
}
/*
int main(void)
{
	char	str1[]= "bien ou quoi";
	char	str2[]= "wlh je suis zehef";
	int result = ft_strlcat(str1,str2,1); 

	printf("%d", result);
}*/
