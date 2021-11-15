# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 09:20:38 by azouaiga          #+#    #+#              #
#    Updated: 2021/11/16 00:24:50 by azouaiga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc 
CFLAGS = -Wall -Wextra -Werror -c
CSOURCES_PART1_PART2=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c  ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS := $(CSOURCES_PART1_PART2:.c=.o)

CSOURCES_BONUS_PART := $(CSOURCES_PART1_PART2) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS_BONUS := $(CSOURCES_BONUS_PART:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building Libft"
	ar -rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

bonus: $(OBJS_BONUS)
	@echo "Building Libft (Bonus part)"
	ar -rc $(NAME) $^

clean:
	@rm -rf $(OBJS_BONUS)
	@echo ".o Files Deleted Successfully" 

fclean: clean
	@rm -rf libft.a
	@echo "libft.a deleted successfully"

re : fclean all
