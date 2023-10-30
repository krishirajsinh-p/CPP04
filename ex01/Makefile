# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 04:42:31 by kpuwar            #+#    #+#              #
#    Updated: 2023/10/30 20:26:01 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SmartAnimals

CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

INCLUDES = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS = ${SRCS:.cpp=.o}

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
