NAME	=	libftprintf.a

# Archivos fuente y objeto
SRC		=	ft_printf.c ft_basic.c ft_hexadecimals.c ft_pointers.c

OBJ		=	${SRC:.c=.o}

# Herramientas
CC		=	cc
RM		=	rm -f
AR		=	ar rcs

# Flags de compilación
CFLAGS	=	-Wall -Wextra -Werror

# Regla de compilación de archivos .c a .o
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

# Regla principal
all: $(NAME)

$(NAME): ${OBJ}
	@${AR} ${NAME} ${OBJ}

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
