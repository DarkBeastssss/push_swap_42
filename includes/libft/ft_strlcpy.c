/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:45:17 by amecani           #+#    #+#             */
/*   Updated: 2024/04/29 16:23:51 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcpy(unsigned char *dst, unsigned char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

// int main()
// {
// 	char dst[14];
// 	const char *src = "OOoo maw gawd";
// 	size_t dstsize = 3;
// 	printf("%zu\n",ft_strlcpy(dst,src,dstsize));
// 	printf("%zu\n",strlcpy(dst,src,dstsize));
// 	return (0);
// }