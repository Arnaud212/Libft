/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:55:39 by agiraud           #+#    #+#             */
/*   Updated: 2019/11/30 18:21:14 by agiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newlst;

	if (!(newlst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
