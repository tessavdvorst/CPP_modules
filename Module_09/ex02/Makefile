# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tvan-der <tvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/27 11:26:39 by tvan-der      #+#    #+#                  #
#    Updated: 2023/03/20 16:11:40 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= 		PmergeMe
CC			= 		c++
CFLAGS		= 		-Wall -Werror -Wextra -std=c++98 -pedantic -g -fsanitize=address

SRCS		= 		main.cpp \
					PmergeMe.cpp

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

fclean:				clean
					@rm -f $(NAME)

re:					clean fclean all

.PHONY:				all clean fclean re

-include $(DEPS)