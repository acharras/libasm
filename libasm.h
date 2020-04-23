/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 08:00:28 by user42            #+#    #+#             */
/*   Updated: 2020/04/23 09:22:07 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stddef.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

ssize_t	ft_strlen(const char *src);
ssize_t	ft_write(int fd, const void *_buf, ssize_t nbytes);
char	ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const cahr *rdi, const cahr *rsi);

#endif