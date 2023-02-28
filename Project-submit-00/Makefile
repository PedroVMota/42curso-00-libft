CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

INCLUDE	= libft.h

SRCS	= 	ft_strncat.c 	ft_strnstr.c 	ft_isdigit.c 	ft_strequ.c		\
			ft_strlen.c 	ft_memcmp.c 	ft_strclr.c 	ft_strchr.c		\
			ft_striteri.c	ft_bzero.c 	ft_strjoin.c 	ft_isascii.c	\
			ft_memcpy.c 	ft_strstr.c 	ft_memalloc.c 	ft_memccpy.c	\
			ft_strcat.c 	ft_isprint.c 	ft_strdel.c 	ft_strnequ.c	\
			ft_toupper.c 	ft_putchar.c 	ft_strrchr.c 	ft_isalpha.c	\
			ft_memchr.c 	ft_strmap.c 	ft_memset.c 	ft_strncmp.c	\
			ft_strmapi.c 	ft_memdel.c 	ft_memmove.c 	ft_strnew.c		\
			ft_putstr.c 	ft_strlcat.c 	ft_strdup.c		ft_atoi.c		\
			ft_isalnum.c 	ft_striter.c 	ft_strsub.c 	ft_strncpy.c	\
			ft_tolower.c 	ft_strcmp.c 	ft_strtrim.c 	ft_isdigit.c	\
			ft_strlcpy.c 	ft_isspace.c 	ft_strsplit.c 	ft_isequal.c	\
			ft_itoa.c 		ft_putendl.c	ft_putnbr.c		ft_putchar_fd.c	\
			ft_putendl_fd.c ft_putnbr_fd.c  

BONUS_S	=

BONUS_O	= $(BONUS_S:.c=.o)

OBJS	= $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

bonus:		$(NAME) $(BONUS_O)
			$(LIB1) $(NAME) $(BONUS_O)
			$(LIB2) $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus