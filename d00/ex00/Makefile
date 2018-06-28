# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mray <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 13:50:52 by mray              #+#    #+#              #
#    Updated: 2018/05/04 19:03:10 by mray             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

filename = megaphone\

SRC		= megaphone.cpp\

# compiler
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

all:
	@ $(CC) $(CFLAGS) $(SRC) -o $(filename)

clean:
	@ rm -f $(filename)

fclean: clean

re: fclean all
