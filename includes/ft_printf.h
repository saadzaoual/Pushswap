/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:09:38 by isel-kha          #+#    #+#             */
/*   Updated: 2025/03/25 15:47:40 by szaoual          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// includes/ft_printf.h
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// Printf function declarations
int	ft_printf(const char *format, ...);
int	ft_puthexa(unsigned long n, char x);
int	ft_putunbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(int n);

#endif
