# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafioron <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 15:31:44 by mafioron          #+#    #+#              #
#    Updated: 2024/11/11 15:03:35 by mafioron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./*.c
BSRC = xxxbonuses.c

OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)

NAME = libft.a

CFLAGS += -Wall -Werror -Wextra -I includes

all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BOBJ)
	ar rcs $(NAME) $(BOBJ)

clean:
	rm -f $(OBJ)
fclean: 
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re
