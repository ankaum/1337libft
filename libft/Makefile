# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 10:34:31 by azouaiga          #+#    #+#              #
#    Updated: 2021/11/06 20:26:14 by azouaiga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#FUNC = ft_memcmp.c#
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCO = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c  ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

all : $(NAME)
	    @echo "Building L9lawi.."

$(NAME) :
	    gcc $(FLAGS) -c $(SRCO)
		    ar rc $(NAME) *.o

clean :
	    rm -rf *.o

fclean : clean
	    rm -rf $(NAME)

re : fclean all
