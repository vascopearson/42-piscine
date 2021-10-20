SRC_C	=	main.c

SRCS	=	$(SRC_C)

CC = gcc

BINS	= main

NAME	=	rush-02

all:	${SRCS}

main:	main.o
	gcc -lm	main.o	main

main.o:	main.c
	gcc	-c	main.c

clean:
	rm -f main.o

fclean:	clean
	rm -f ${NAME}

.PHONY	= all clean	fclean
