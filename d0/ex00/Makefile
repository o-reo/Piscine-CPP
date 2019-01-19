# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 0017/12/28 15:26:42 by uaud         #+#   ##    ##    #+#        #
#    Updated: 2019/01/17 14:07:17 by eruaud      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror
FUNC = megaphone
SRC = $(addsuffix .cpp, $(FUNC))
OBJ = $(addsuffix .o, $(FUNC))
RED = \033[1;31m
GREEN = \033[1;92m
BLUE = \033[34;1m
YELLOW = \033[0;33m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[1;31mCompiling project..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[1;92mSuccess !"

./build/%.o: ./src/%.cpp
	@echo "     $(YELLOW) → Compiling $<"
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADER)
	@echo "     $(GREEN)   OK"

clean:
	@/bin/rm -f $(OBJ)
	@echo "  $(YELLOW)OBJ files have been deleted."

fclean:
	@/bin/rm -f $(OBJ) $(NAME)
	@echo "  $(YELLOW)$(NAME) and OBJ files have been deleted."

re: fclean $(NAME)

.PHONY = all clean fclean re norm lib