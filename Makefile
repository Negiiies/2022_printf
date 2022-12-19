# E89 Pedagogical & Technical Lab
# project:     2022_printf
# created on:  2022-12-12 - 16:36 +0100
# 1st author:  dylan.le - dylan.le
# description: Printf

NAME	=	Printf

SRCS	=	src/main.c		\
		src/printf.a.c		\
		src/get_digit.c		\
		src/nb_len.c		\
		src/print_base10.c	\
		src/stu_strlen.c	\
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
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
