/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:59:25 by stherkil          #+#    #+#             */
/*   Updated: 2017/08/14 18:00:16 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *c)
{
	int i;

	while (c[i] != 0)
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
