CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f

NAME	= libft.a

INCLUDE	= libft.h
SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strncat.c ft_strcat.c ft_strlcat.c \
			ft_strncpy.c ft_strlcpy.c ft_strdup.c ft_strlen.c ft_strstr.c \
			ft_strnstr.c ft_strrchr.c ft_strchr.c ft_strncmp.c ft_strcmp.c \
			ft_atoi.c ft_isalpha.c ft_isprint.c ft_isascii.c ft_isalnum.c \
			ft_isdigit.c ft_isspace.c ft_isequal.c ft_tolower.c ft_toupper.c \
			ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
			ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
			ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
			ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

OBJS	= $(SRCS:.c=.o)
BONUS_S	= ft_lstnew.c ft_lstdelone.c ft_lstdel.c
BONUS_O	= $(BONUS_S:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

bonus:		$(NAME) $(BONUS_O)
			$(LIB1) $(NAME) $(BONUS_O)
			$(LIB2) $(NAME)

.c.o:
			$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus