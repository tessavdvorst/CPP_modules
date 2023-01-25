# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tvan-der <tvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/24 15:29:15 by tvan-der      #+#    #+#                  #
#    Updated: 2023/01/25 13:29:17 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= 		ex01
CC			= 		c++
CFLAGS		= 		-Wall -Werror -Wextra -std=c++98

SRCS		= 		Cat.cpp \
					Animal.cpp \
					WrongAnimal.cpp \
					WrongCat.cpp \
					Dog.cpp \
					Brain.cpp \
					main.cpp

				
OBJS_DIR 	= 		objs
OBJS		= 		$(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))
DEPS		= 		$(OBJS:.o=.d)

all:				$(NAME)

$(NAME):			$(OBJS)
					@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
					@echo "\033[0;32mCompilation completed!\033[0m"

$(OBJS_DIR)/%.o:	%.cpp | $(OBJS_DIR)
					@$(CC) $(CFLAGS) -MMD -o $@ -c $<

$(OBJS_DIR):
					@mkdir -p $@
	
clean:
					@rm -rf $(OBJS_DIR)
					@echo "\033[0;31mCleaned!\033[0m"

fclean:
					@rm -f $(NAME)
					@echo "\033[0;31mCleaned!\033[0m"

re:					clean fclean all

.PHONY:				all clean fclean re

-include $(DEPS)