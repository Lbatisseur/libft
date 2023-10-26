/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:18:46 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 16:28:04 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    
    char    *ssrc;
    char    *ccdest;
    size_t    i;
    
    if (!dst && !src)
        return (NULL);
    
    ssrc = (char *) src;
    ccdest = (char *) dst;
    i = 0;
    
    if (ccdest > ssrc)
        while (len-- > 0)
            ccdest[len] = ssrc[len];
    
    else
    {
        while (i++ < len)
            ccdest[i] = ssrc[i];
    }
    return (dst);
}
