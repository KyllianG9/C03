/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:50:56 by kgarcia           #+#    #+#             */
/*   Updated: 2023/07/12 18:42:49 by kgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char str1[]= "qwertifajbg";
	char str2[]= "qwertyfjabh";
	unsigned int result= ft_strncmp(str1,str2,3);

	printf("%d", result);
}*/
