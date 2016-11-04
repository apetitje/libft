# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apetitje <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 22:21:20 by apetitje          #+#    #+#              #
#    Updated: 2016/11/04 12:51:47 by apetitje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c

BINARY = *.o

all: $(NAME)

$(NAME) : comp
	ranlib $(NAME)

comp: fonctions
	ar r $(NAME) $(BINARY)

fonctions:
	gcc -c $(SRC)

clean:
	/bin/rm -f *.o

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all
