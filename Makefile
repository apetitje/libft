# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apetitje <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 22:21:20 by apetitje          #+#    #+#              #
#    Updated: 2016/11/05 13:52:26 by apetitje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

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
