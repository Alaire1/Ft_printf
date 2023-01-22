/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:00:47 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/22 22:01:47 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_print_hex(unsigned int nbr, char *base);
int		ft_print_pointer(void *nbr, char *base);
size_t	ft_strlen(const char *s);
int		ft_print_unsigned(unsigned int nb);
int		ft_print_nbr(int n);
char	*ft_strchr(char const *s, int c);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);
#endif
