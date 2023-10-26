/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:18:48 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 14:43:39 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    
    while(s[i])
    {
        if (s[i] == c)
        return (&s[i])
        i++;
    }
    if (s[i] == c)
    return (&s[i])
return (NULL);
}