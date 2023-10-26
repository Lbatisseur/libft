/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar <nbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:17:19 by nbelouar          #+#    #+#             */
/*   Updated: 2023/10/26 13:40:39 by nbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(const char *s1)
{
	size_t	    taille;
	char		*dest;

	if (!s1)
		return (NULL);
	taille = ft_strlen(s1) + 1;
	dest = (char *) malloc (taille * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}