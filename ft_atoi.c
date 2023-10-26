/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:21:08 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 21:28:05 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
    int    result;
    int    sign;
    int    i;
    
    result = 0;
    sign = 1;
    i = 0;
    
    while (ft_deadspace(str[i]))
        i++;
    /
    if (str[i] == '+' && str[i + 1] != '-')
        i++;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    
    while (str[i] && str[i] >= 48 && str[i] <= 57)
    {
        result *= 10;
	result += str[i] - 48;
	i++;
    }

    result *= sign;
    return (result);
}

int    ft_deadspace(int c)
{
    
    if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
        
        return (1);
    return (0);
}