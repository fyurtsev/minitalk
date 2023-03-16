# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fyurtsev <fyurtsev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/18 14:27:38 by fyurtsev          #+#    #+#              #
#    Updated: 2022/04/18 14:27:42 by fyurtsev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVERNAME = server
CLIENTNAME = client
NAME = print.c
SRCSERVER = server.c
SRCCLIENT = client.c
CC = gcc
FLAGS = -Wall -Wextra -Werror -ggdb
OBJSERVER = $(SRCSERVER:.c=.o)
OBJCLIENT = $(SRCCLIENT:.c=.o)
OBJNAME = $(NAME:.c=.o)

all: $(SERVERNAME) $(CLIENTNAME)

$(NAME) : all

$(SERVERNAME) : $(OBJSERVER)
	$(CC) $(OBJSERVER) -o $(SERVERNAME) $(NAME)

$(CLIENTNAME) : $(OBJCLIENT)
	$(CC) $(OBJCLIENT) -o $(CLIENTNAME) $(NAME)

clean:
	rm -rf $(OBJSERVER) $(OBJCLIENT)

fclean: clean
	rm -rf $(SERVERNAME) $(CLIENTNAME)

re: fclean all

.PHONY : re fclean clean all norm
