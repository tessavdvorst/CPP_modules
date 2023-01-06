# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: hqureshi <hqureshi@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/22 10:34:59 by hqureshi      #+#    #+#                  #
#    Updated: 2023/01/01 17:28:47 by Tessa         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CC			= g++ # or c++?
CFLAGS		= -Wall -Werror -Wextra -std=c++98

SRCS		= megaphone.cpp

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
