/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 08:00:28 by user42            #+#    #+#             */
/*   Updated: 2020/10/29 16:19:38 by user42           ###   ########lyon.fr   */
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

# define STRLEN(x) printf("str=[%s] MINE: %d | REAL: %d\n", x, (int)ft_strlen(x), (int)strlen(x));
# define STRCPY(a, b) printf("str=[%s] MINE: %s | REAL: %s\n", b, ft_strcpy(a, b), strcpy(a, b));
# define STRCMP(c, d) printf("MINE: %d | REAL: %d\n", ft_strcmp(c, d), strcmp(c, d));
# define WRITE(e, f, g) printf("MINE: %d | REAL: %d\n", (int)ft_write(e, f, g), (int)write(e, f, g));


ssize_t	ft_strlen(const char *src);
ssize_t	ft_write(int fd, const void *_buf, ssize_t nbytes);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *rdi, const char *rsi);

#endif