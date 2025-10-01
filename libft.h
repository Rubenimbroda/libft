/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:37:23 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/10/01 14:55:11 by rnuno-im         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>

size_t	ft_strlen(const char str[]);
int	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(int c);
int	ft_isdigit(char c);
int	ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *str, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	ft_tolower(char c);
char	ft_toupper(char c);

#endif