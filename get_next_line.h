/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarth <tbarth@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:42:51 by tbarth            #+#    #+#             */
/*   Updated: 2020/12/05 18:16:26 by tbarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const	char *s, int c);
char	*ft_strjoin(char *s1, char *s2);

#endif
