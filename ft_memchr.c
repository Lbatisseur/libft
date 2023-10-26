/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:11:18 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 16:28:05 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    
    
    str = (unsigned char *) s;
    uc  = (unsigned char) c;
    i = 0;
    
    while (i < n)
    {
        if (str[i] == uc)
            return ((void *) &str[i]);
        i++;
    }
    return (NULL);
}