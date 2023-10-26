/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:58:57 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 13:03:21 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    src_taille;
    
   
    src_taille = ft_strlen(src);

    if (src_taille + 1 < dstsize)
        
        ft_memcpy(dst, src, src_taille + 1);
    
    else if (dstsize != 0)
    {
        
        ft_memcpy(dst, src, dstsize - 1);
       
        dst[dstsize - 1] = 0;
    }
    return (src_taille);
}