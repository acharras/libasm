# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 11:37:56 by acharras          #+#    #+#              #
#    Updated: 2021/01/13 15:46:02 by user42           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


SRC =	libasm/ft_strlen.s\
		libasm/ft_strcpy.s\
		libasm/ft_strcmp.s\
		libasm/ft_write.s\
		libasm/ft_read.s\
		libasm/ft_strdup.s


OBJ = $(SRC:.s=.o)


HEADERS =	./libasm.h


NAME =	libasm.a


NASM =	nasm


NASMFLAGS =	-f elf64


RM =	rm -rf

TEST =	test


all :	$(NAME)


$(NAME) :	$(OBJ) $(HEADERS)
				@ar rcs $(NAME) $(OBJ)
			@echo "\033[38;2;153;102;255;1m######################################"
			@echo "\033[38;2;153;102;255;1m#\033[38;2;0;204;0;1m\tCompiling $(NAME)...   \033[38;2;153;102;255;1m#\n#\033[38;2;0;204;0;1m\t\tDone\t\t     \033[0m\033[38;2;153;102;255;1m#"
			@echo "\033[38;2;153;102;255;1m######################################\033[0m"

%.o: %.s $(HEADERS)
			@$(NASM) $(NASMFLAGS) $< -o $@
			@echo "\033[38;2;255;204;0;1mCompiling object $@...\nDone\033[0m"

$(TEST)	:
			clang -Wall -Werror -Wextra -o $(TEST) main.c libasm.a

clean :
			@$(RM) $(OBJ)
			@echo "\033[38;2;255;51;0;1mDeleting objects file...\nDone"
fclean :	clean
				@$(RM) $(NAME) ${TEST}
				@echo "Deleting $(NAME)...\nDone"
				@echo "Deleting $(TEST)...\nDone\033[0m"
re :	fclean all
