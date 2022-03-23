# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 18:10:22 by seokchoi          #+#    #+#              #
#    Updated: 2022/03/23 19:19:57 by seokchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE	= srcs/
SRCS    = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
			ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
			ft_toupper.c ft_calloc.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
			ft_itoa.c ft_strmapi.c ft_striteri.c\
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRCS_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 
OBJS	= ${SRCS:.c=.o}
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME    = libft.a
NORMINETTE = norminette
NORMOBJS	= ${SRCS}

ifdef WITH_B
	OBJECTS = $(OBJ) $(OBJ_BONUS)
else
	OBJECTS = $(OBJ)
endif

all :		${NAME}

.c.o:		${SRCS} $(SRC_BONUS)
			${CC} ${CFLAGS} -c $^

${NAME}:	${OBJECTS}
			ar -rcs ${NAME} ${OBJECTS}

bonus:
			@make WITH_B=1 all

clean:
			rm -f ${OBJS}

fclean:
			rm -f ${OBJS}
			rm -f ${NAME}

norm:
			${NORMINETTE} ${NORMOBJS}

re:			fclean all clean

.PHONY:		all clean fclean re norm