# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angomes- <angomes-@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 19:52:35 by angomes-          #+#    #+#              #
#    Updated: 2023/05/24 22:48:40 by angomes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
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
	ft_split \

FILES_BONUS =\
	ft_lstnew_bonus \
	ft_lstadd_front_bonus \
	ft_lstsize_bonus \
	ft_lstlast_bonus \
	ft_lstadd_back_bonus \
	ft_lstdelone_bonus \
	ft_lstclear_bonus \
	ft_lstiter_bonus \
	ft_lstmap_bonus \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_BONUS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_BONUS)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_BONUS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_BONUS)))

all: $(NAME)

$(NAME): $(OBJS)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
	$(AR) $(NAME) $@

bonus: $(OBJS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
