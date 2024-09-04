NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS = $(wildcard ctype/*.c) $(wildcard ft_stdio/*.c) \
		$(wildcard ft_stdlib/*.c) $(wildcard ft_string/*.c) \
		$(wildcard stdlib/*.c) $(wildcard string/*.c) \
		$(wildcard strings/*.c)
OBJS = $(SRCS:.c=.o)

BONUS = $(wildcard ft_lst/*.c)
BONUS_OBJS = $(BONUS:.c=.o)

INCLUDES = -I ./

ifdef WITH_BONUS
OBJS += $(BONUS_OBJS)
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus:
	@make WITH_BONUS=1

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
