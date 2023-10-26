/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:09:44 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 13:26:51 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_taille;
    size_t dst_taille;

    src_taille = ft_strlen(src);
    dst_taille = ft_strlen(dst);

    if (dst_taille == dstsize)
        return(src_taille + dst_taille);

    if (dst_taille >= dstsize)
        dst_taille = dstsize;

    if (src_taille < dstsize - dst_taille)
        ft_memcpy(dst + dst_taille, src, src_taille + 1);
    else
    {
        ft_memcpy(dst + dst_taille, src, dstsize - dst_taille - 1);
        dst[dstsize - 1] = '\0';
    }
    return (dst_taille + src_taille);
}