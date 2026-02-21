# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/21 12:31:12 by oamairi           #+#    #+#              #
#    Updated: 2026/02/21 13:42:18 by oamairi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		=  c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	=	megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re