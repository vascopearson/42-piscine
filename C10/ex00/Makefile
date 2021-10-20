# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vserrao- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 10:03:58 by vserrao-          #+#    #+#              #
#    Updated: 2021/09/28 12:06:04 by vserrao-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_display_file
SRCS=ft_display_file.c

all: ${NAME}

${NAME}:
	gcc -c -Wall -Wextra -Werror ${SRCS}
	gcc -o ${NAME} ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f ${NAME}
