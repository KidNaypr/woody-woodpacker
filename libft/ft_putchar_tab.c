/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:48:34 by clanier           #+#    #+#             */
/*   Updated: 2016/11/08 10:39:59 by clanier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_tab(int lines, char **tab)
{
	int		i;

	i = 0;
	while (i != lines)
	{
		ft_putendl(tab[i]);
		i++;
	}
}
