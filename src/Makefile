# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 19:52:35 by angomes-          #+#    #+#              #
#    Updated: 2023/05/19 11:23:18 by angomes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =\
	ft_strlen \
	ft_memcpy \
	ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_strlcpy \
	ft_strncmp \
	ft_tolower \
	ft_toupper \
	ft_isprint \
	ft_atoi	\
	ft_strlcat \
	ft_memmove \
	ft_memset \
	ft_memcmp \
	ft_memchr \
	ft_strchr \
	ft_strrchr \
	ft_strnstr \
	ft_bzero \
	ft_strdup \
	ft_calloc \
	ft_substr \
	ft_strjoin \
	ft_striteri \
	ft_strmapi \
	ft_itoa \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	ft_strtrim	\

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
