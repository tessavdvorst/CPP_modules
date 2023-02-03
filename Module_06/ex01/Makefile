# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tvan-der <tvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/03 14:29:57 by tvan-der      #+#    #+#                  #
#    Updated: 2023/02/03 15:17:35 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= 		ex01
CC			= 		c++
CFLAGS		= 		-Wall -Werror -Wextra -std=c++98 -pedantic

SRCS		=		Data.cpp \
 					main.cpp \
					serialize.cpp
				
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