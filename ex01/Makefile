# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 09:35:11 by jgasparo          #+#    #+#              #
#    Updated: 2024/09/23 11:41:23 by jgasparo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook

CPP := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
		@echo CREATING MEGAPHONE
		@$(CPP) $(CPPFLAGS) -o $(NAME) $(SRC)
		@sleep 1
		@tput cuu1 dl1
		@echo "MEGAPHONE CREATED  " 

clean:
	@$(RM) $(NAME)
	@echo MEGAPHONE DESTROYED BYE !
	@sleep 1
	@tput cuu1 dl1

.PHONY : all clean