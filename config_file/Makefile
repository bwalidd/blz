# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wbouwach <wbouwach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 22:08:42 by wbouwach          #+#    #+#              #
#    Updated: 2023/12/26 19:05:09 by wbouwach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server

SRC = server.cpp configFile.cpp \
	../req_res_post/post.cpp ../req_res_post/request.cpp ../req_res_post/respons.cpp ../get_method/getMethod.cpp
	
OBJ = $(SRC:.cpp=.o)

CPPFLAGS =  -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all