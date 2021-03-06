/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlucille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:08:19 by tlucille          #+#    #+#             */
/*   Updated: 2020/01/08 16:08:22 by tlucille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <sys/types.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <unistd.h>

# define MAX_FD 256

char		*gnl_strchr(const char *s, int c);
char		*gnl_strnew(size_t size);
char		*gnl_strjoin(char **s1, char *s2, int fr, int ret);
char		*gnl_strdup(const char *s1, int empty);
void		*gnl_memset(void *b, int c, size_t len);
int			get_next_line(int fd, char **line);
size_t		gnl_strlen(const char *str);
void		gnl_strdel(char **str);

#endif
