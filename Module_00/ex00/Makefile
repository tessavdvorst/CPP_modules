# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tvan-der <tvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/10 12:44:35 by tvan-der      #+#    #+#                  #
#    Updated: 2023/01/10 13:07:59 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CC			= g++
CFLAGS		= -Wall -Werror -Wextra -std=c++98

SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[0;32mCompilation completed!\033[0m"

%.o:		%.cpp 
			@$(CC) $(CFLAGS) -o $@ -c $<

clean:
			@rm -f $(OBJS)
			@echo "\033[0;31mCleaned objects files!\033[0m"

fclean:
			@rm -f $(NAME)
			@echo "\033[0;31mCleaned executable!\033[0m"

re:			fclean all

.PHONY:		all clean fclean re
