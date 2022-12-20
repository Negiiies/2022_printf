# E89 Pedagogical & Technical Lab
# project:     2022_printf
# created on:  2022-12-12 - 16:36 +0100
# 1st author:  dylan.le - dylan.le
# description: Printf

NAME	=	dprintf.a

SRCS	=	src/printf.a.c		\
		src/stu_strlen.c	\
		src/print_base10.c	\
		src/nb_len.c		\
		src/get_digit.c		\
		src/print_base16.c	

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

normale: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

test:
	$(CC) $(CFLAGS) src/main.c dprintf.a -o dprintf

t:
	make
	make test
	./dprintf

mclean:
	rm src/*.o src/*.c~ include/*.h~ *~

save:
	git add src/ include/ Makefile
	git commit -m "Sauvegarde"
	git push

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re save



