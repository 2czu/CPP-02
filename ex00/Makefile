BOLD            = "\033[1m"
RESET           = "\033[0m"
GREEN           = "\033[0;32m"
CYAN            = "\033[0;36m"
LIGHT_RED       = "\033[91m"
LIGHT_GREEN     = "\033[92m"
LIGHT_CYAN      = "\033[96m"
BROWN           = "\033[38;5;94m"

NEON_GREEN      = "\033[38;5;46m"
ELECTRIC_BLUE   = "\033[38;5;51m"
HOT_PINK        = "\033[38;5;198m"
BLOOD_RED       = "\033[38;5;196m"
SUNBURST_YELLOW = "\033[38;5;226m"
DEEP_ORANGE     = "\033[38;5;208m"
PURPLE_RAVE     = "\033[38;5;129m"
CYAN_SHOCK      = "\033[38;5;51m"

BG_FIRE         = "\033[48;5;196m"
BG_LIME         = "\033[48;5;46m"
BG_ULTRA_BLUE   = "\033[48;5;21m"
BG_MAGENTA      = "\033[48;5;201m"

NAME        = fixed
FILES       = main.cpp\
			  Fixed.cpp

OBJS_DIR    = objs
OBJS        = $(FILES:.cpp=.o)
OBJS        := $(patsubst %.o,$(OBJS_DIR)/%.o,$(OBJS))

CC          = c++
CFLAGS      = -std=c++98 -Werror -Wall -Wextra -g3


$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBPRINTF) $(OBJS) $(HEADER)
	@echo $(BLOOD_RED)$(BOLD)"Making $(NAME)..."$(RESET)
	@$(CC) $(OBJS) -g3 -o $(NAME)
	@echo $(NEON_GREEN)$(BOLD)"Made $(NAME) without any problem. ✔\n"$(RESET)

all: $(NAME)

clean:
	@if [ -d "$(OBJS_DIR)" ]; then \
		echo $(SUNBURST_YELLOW)$(BOLD)"Removing all object files.."$(RESET); \
		rm -rf $(OBJS_DIR); \
		echo $(NEON_GREEN)$(BOLD)"Done. ✔"$(RESET); \
	else \
		echo $(CYAN_SHOCK)$(BOLD)"No object files to remove. Skipping clean."$(RESET); \
	fi

fclean: clean
	@if [ -f "$(NAME)" ] || [ -f "$(LIBPRINTF)" ]; then \
		echo $(SUNBURST_YELLOW)$(BOLD)"Removing all libraries and external files.."$(RESET); \
		rm -f $(NAME); \
		echo $(NEON_GREEN)$(BOLD)"Done. ✔"$(RESET); \
	else \
		echo $(CYAN_SHOCK)$(BOLD)"No libraries or external files to remove. Skipping fclean."$(RESET); \
	fi

re: fclean all

default: all

.PHONY: default all re fclean clean