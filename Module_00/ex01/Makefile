# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: hqureshi <hqureshi@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/22 10:34:59 by hqureshi      #+#    #+#                  #
#    Updated: 2023/01/05 19:29:49 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
CC			= g++ # or c++?
CFLAGS		= -Wall -Werror -Wextra -std=c++98

SRCS		= main.cpp \
				Contact.cpp \
				PhoneBook.cpp

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

#linking objects files to make executable
$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[0;32mCompilation completed!\033[0m"

#compiling cpp files in order to generate .o files
%.o: %.cpp
			@$(CC) $(CFLAGS) -o $@ -c $^

clean:
			@rm -f $(OBJS)
			@echo "\033[0;31mCleaned!\033[0m"

fclean:
			@rm -f $(NAME)
			@echo "\033[0;31mCleaned!\033[0m"

re:			fclean all

.PHONY:		all clean fclean re
