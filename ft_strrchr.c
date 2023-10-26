/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:44:18 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 15:36:04 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *res;
    
    res = NULL;
    i = 0;

    while (s[i])
    {
        if (s[i] == c)
            res = (char *) &s[i];
        i++;
    }
    if (s[i] == c)
        res = (char *) &s[i];
    return (res);
}


