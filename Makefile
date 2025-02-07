NAME	=	libftprintf.a

# Archivos fuente y objeto
SRC		=	ft_printf.c			\
			ft_basics.c			\
			ft_hexadecimals.c	\
			ft_pointers.c

OBJ		=	${SRC:.c=.o}

# Herramientas
CC		=	gcc
RM		=	rm -f
AR		=	ar rc

# Flags de compilación
CFLAGS	=	-Wall -Wextra -Werror -I.

# Regla de compilación de archivos .c a .o
%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

# Regla principal
all: $(NAME)

$(NAME): ${OBJ}
	@echo "Compiling $(NAME)..."
	${AR} ${NAME} ${OBJ}
	@echo "Done!"

# Limpiar archivos objeto
clean:
	${RM} ${OBJ}

# Limpiar todo
fclean: clean
	${RM} $(NAME)

# Recompilar desde cero
re: fclean all

# No se trata como archivo
.PHONY: all clean fclean re
