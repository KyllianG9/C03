/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:30:06 by kgarcia           #+#    #+#             */
/*   Updated: 2023/07/12 18:44:20 by kgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int     main(void)
{
        char str1[]= "agsenghbonjoar";
        char str2[]= "agsenghbonjobt";
        int result= ft_strcmp(str1,str2);

        printf("%d", result);
}*/
