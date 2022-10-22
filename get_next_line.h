
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:06:08 by lliberal          #+#    #+#             */
/*   Updated: 2022/09/02 12:41:36 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *s);
char *ft_strchr(const char *str, int c);
char *ft_substr(char const *s, unsigned int start, int len);
char	*ft_strjoin(char *s1, char *s2);
char *ft_strdup(const char *s1);
char *get_next_line(int fd);

#endif
