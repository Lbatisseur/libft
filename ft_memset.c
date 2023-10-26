/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:24:12 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/25 16:28:07 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
     unsigned char *tp;
     
    tp = (unsigned char *)s;

    while(n > 0)
    {
        *tp = c;
        *tp++;
        n--;
    }
}
