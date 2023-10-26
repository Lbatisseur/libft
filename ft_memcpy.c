/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:52:21 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 17:48:34 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *tp_dst
    unsigned char *tp_src

    tp_dst = (unsigned char *) dest;
    tp_src = (unsigned char *) src;
    while(n > 0)
    {
        *(tp_dst++) = *(tp_src++);
        n--;
    }
}