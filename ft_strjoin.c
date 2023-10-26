/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:58:52 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/26 14:10:26 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strjoin(const char *s1, const char *s2)
{
    char *res;
    int i;
    int x;
    
    i = 0;
    x = 0;
    
    res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!res)
        return (NULL);
    
    while (s1[i])
        res[x++] = s1[i++];
   
    i = 0;
    
    while (s2[i])
        res[x++] = s2[i];
    
    res[x] = '\0';

    return (res);
}