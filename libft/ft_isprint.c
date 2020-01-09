/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboualla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 21:21:10 by oboualla          #+#    #+#             */
/*   Updated: 2019/04/01 21:39:51 by oboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int arg)
{
	if (arg >= ' ' && arg <= '~')
		return (1);
	return (0);
}