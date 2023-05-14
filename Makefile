SRCS =	ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_x.c\
		ft_printf.c\
		ft_upper_x.c\
		ft_putnbr_u.c\
		ft_address.c\
		ft_conditions.c


NAME = libftprintf.a

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rc

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: ${NAME}

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)
clean:
		${RM} ${OBJS}
fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re
