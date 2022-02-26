# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: honkim <honkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 10:25:50 by honkim            #+#    #+#              #
#    Updated: 2022/02/24 20:11:19 by honkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printnbr.c\
				ft_printnbr_base.c\
				ft_printnbr_unsigned.c\
				ft_printstr.c\
				ft_printchar.c\
				ft_strlen.c\
				ft_itoa.c\
				ft_itoa_unsigned.c\
				ft_printf.c
	
OBJS = $(SRCS:.c=.o) 

NAME = libftprintf.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean
