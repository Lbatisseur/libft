/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:50:08 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 19:19:45 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t x;
    
    i = 0;
    x = 0;
    
    if (needle[0] == 0)
        return ((char *) haystack);
   
    while (haystack[i] && i < len)
    {
       
        while (haystack[i + x] == needle[x] && haystack[i + x] && i + x < len)
        {
           
            x++;
            
            if (needle[x] == 0)
                return ((char *) haystack + i);
        }
        i++;
        
        x = 0;
    }
    return (0);
}