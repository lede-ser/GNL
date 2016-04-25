/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:34:11 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:01:40 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c_s;
	size_t			i;

	i = 0;
	c_s = ((unsigned char *)s);
	if (n == 0)
		return ;
	while (i < n)
	{
		c_s[i] = 0;
		i++;
	}
}
