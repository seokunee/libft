SOURCE	= srcs/
SRCS    = main.c ft_atoi.c ft_parse.c ft_putchar.c ft_putstr.c \
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME    = libft.a
NORMINETTE = norminette
NORMOBJS	= ${SRCS}

.c.o:
			${CC} ${CFLAGS} -c $<

${NAME}:	${OBJS}
			gcc ${CFLAGS} $^ -o $@

all :		${NAME}

clean:
			rm -f ${OBJS}

fclean:
			rm -f ${OBJS}
			rm -f ${NAME}

norm:
			${NORMINETTE} ${NORMOBJS}

re:			fclean all clean

.PHONY:		all clean fclean re norm