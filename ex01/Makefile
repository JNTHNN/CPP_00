# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 09:35:11 by jgasparo          #+#    #+#              #
#    Updated: 2024/10/05 21:27:10 by jgasparo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook

CPP := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := PhoneBook.cpp main.cpp Contact.cpp utils.cpp

all: $(NAME)

$(NAME): $(SRC)
		@echo CREATING PHONEBOOK
		@$(CPP) $(CPPFLAGS) -o $(NAME) $(SRC)
		@sleep 1
		@tput cuu1 dl1
		@echo "PHONEBOOK CREATED  " 

clean:
	@$(RM) $(NAME)
	@echo PHONEBOOK DESTROYED BYE !
	@sleep 1
	@tput cuu1 dl1

.PHONY : all clean