/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:04:01 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/30 21:22:40 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//locate first occurence of character in string

char	*ft_strchr(char const *s, int c)
{	
	unsigned char character;

	character = c;
	while (*s != character)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *)s);
}
