/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 08:00:28 by user42            #+#    #+#             */
/*   Updated: 2021/01/13 17:16:50 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# include <stdio.h>
# include <stddef.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define STRLEN(x) printf("str=[%s]\nMINE: %d\nREAL: %d\n\n", x, (int)ft_strlen(x), (int)strlen(x));
# define STRCPY(a, b) printf("str=[%s]\nMINE: %s\nREAL: %s\n\n", b, ft_strcpy(a, b), strcpy(a, b));
# define STRCMP(c, d) printf("MINE: %d\nREAL: %d\n\n", ft_strcmp(c, d), strcmp(c, d));
# define STRDUP(str) printf("MINE: %s\nREAL: %s\n\n", ft_strdup(str), strdup(str));

ssize_t	ft_strlen(const char *src);
ssize_t	ft_write(int fd, const void *_buf, ssize_t nbytes);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *rdi, const char *rsi);
char	*ft_strdup(const char *str);

#endif