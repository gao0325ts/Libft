NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

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

BOLD =			\033[1m
ITALIC =		\033[3m
NEON_PINK =		\033[38;5;198m
NEON_GREEN =	\033[38;5;118m
CYBER_PURPLE =	\033[38;5;99m
GLITCH_BLUE =	\033[38;5;81m
ELECTRIC_BLUE =	\033[38;5;39m
HOT_PINK =		\033[38;5;205m
DEF_COLOR =		\033[0;39m

MAKEFLAGS += --no-print-directory

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\n$(BOLD)$(GLITCH_BLUE)⚡ Creating archive $(NAME)...⚡$(DEF_COLOR)"
	@$(AR) $@ $^
	@echo "\n$(BOLD)$(NEON_GREEN)✅ $(NAME) are ready! ✅$(DEF_COLOR)\n"

.c.o:
	@echo "$(ITALIC)$(GLITCH_BLUE)⚙️  Compiling: $(ELECTRIC_BLUE)$<$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus:
	@echo "$(BOLD)$(NEON_PINK)💥 Building with bonus... 💥$(DEF_COLOR)"
	@$(MAKE) WITH_BONUS=1
	@echo "$(NEON_GREEN)✅ Bonus build complete! ✅$(DEF_COLOR)"

clean:
	@echo "\n$(BOLD)$(HOT_PINK)🧹 Cleaning up object files... 🧹$(DEF_COLOR)"
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "$(NEON_GREEN)✨ Object files cleaned! ✨$(DEF_COLOR)\n"

fclean: clean
	@echo "$(BOLD)$(NEON_PINK)🧼 Removing $(NAME)... 🧼$(DEF_COLOR)"
	@$(RM) $(NAME)
	@echo "$(NEON_GREEN)✨ $(NAME) is gone! Fresh start ready! ✨$(DEF_COLOR)\n"

re:
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔄 Rebuilding $(NAME)...🔄$(DEF_COLOR)"
	@make fclean
	@make all

.PHONY: all clean fclean re bonus
