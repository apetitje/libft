# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apetitje <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 22:21:20 by apetitje          #+#    #+#              #
#    Updated: 2016/11/05 16:51:53 by apetitje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memalloc.c ft_memdel.c ft_putchar.c ft_putstr.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnew.c ft_tolower.c ft_toupper.c ft_atoi.c ft_putnbr.c ft_putendl.c ft_itoa.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c

BINARY = *.o

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar r $(NAME) $(BINARY)
	ranlib $(NAME)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
