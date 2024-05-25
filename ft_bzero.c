/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 20:53:56 by agiraud           #+#    #+#             */
/*   Updated: 2019/11/15 21:10:41 by agiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*block;
	int				i;

	block = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		block[i] = 0;
		i++;
		n--;
	}
}
