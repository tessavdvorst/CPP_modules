# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Tessa <Tessa@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/16 16:22:11 by Tessa         #+#    #+#                  #
#    Updated: 2023/01/20 17:11:58 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= 		ex00
CC			= 		c++
CFLAGS		= 		-Wall -Werror -Wextra -std=c++98

SRCS		= 		main.cpp \
					ClapTrap.cpp \
					GetterSetter.cpp \
					Actions.cpp
				
OBJS_DIR 	= 		objs
OBJS		= 		$(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))
DEPS		= 		$(OBJS:.o=.d)

all:				$(NAME)

$(NAME):			$(OBJS)
					@$(CC) $(CFLAGS) $(OBJS) -g -fsanitize=address -o $(NAME)
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