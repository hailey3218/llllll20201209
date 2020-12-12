# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/03 22:17:25 by hbang             #+#    #+#              #
#    Updated: 2020/12/12 22:15:00 by hbang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
AFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror
.SUFFIXEX : .c.o

SRCS	=	ft_atoi.c \
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c \
			ft_toupper.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_itoa.c\
			ft_strmapi.c

OBJS = $(SRCS:.c=.o)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

all : $(NAME)

$(NAME) : $(OBJS)
	ar $(AFLAGS) $@ $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : clean all

.PHONY : all bonus clean fclean re
