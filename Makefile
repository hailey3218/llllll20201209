# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbang </var/mail/hbang>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/22 20:22:42 by hbang             #+#    #+#              #
#    Updated: 2020/11/22 20:35:47 by hbang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

%.o: %.c
		gcc - c $(CFLAGS) -c $< -o $@

$(NAME): ${OBJS}
		ar rcs $@ ${OBJS}

all : $(NAME)

clean:
		rm -f *.o
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re : fclean all

