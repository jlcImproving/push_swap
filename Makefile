# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/19 11:01:28 by joaocharneca      #+#    #+#              #
#    Updated: 2022/06/20 18:51:07 by jde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAMES
NAME = push_swap

CHECKER_NAME = checker

LIBFT_NAME = libft.a

# MAKE
MAKE = make

# COMPILER
CC = gcc

CFLAGS = -Wall -Wextra -Werror

CFLAGS += -I ./$(LIBFT_DIR)/inc -I ./inc

LDFLAGS = -L $(LIBFT_DIR)

LDLIBS = -lft

LIBFT = $(LIBFT_DIR)/$(LIBFT_NAME)

# PATHS
SRCS_PATH = src
OBJS_PATH = obj

# SRCS DIRS
SHARED_DIR = shared
PUSH_SWAP_DIR = push_swap_dir
CHECKER_DIR = checker_dir

# OBJS DIRS
OBJS_DIRS_NAME =	$(SHARED_DIR)		$(PUSH_SWAP_DIR)	$(CHECKER_DIR)

OBJS_DIRS = $(addprefix $(OBJS_PATH)/, $(OBJS_DIRS_NAME))

LIBFT_DIR = libft

# SOURCES
SHARED_FILES =		handle_args.c\
					check_args.c\
					tab_utils.c\
					op_s.c\
					op_p.c\
					op_r.c\
					op_rr.c

PUSH_SWAP_FILES =	main.c\
					handle_sort.c\
					sort_small.c\
					sort_small_utils.c\
					sort_big.c\
					sort_big_utils.c

CHECKER_FILES =		checker.c

SHARED_SRCS = $(addprefix $(SHARED_DIR)/, $(SHARED_FILES))

PUSH_SWAP_SRCS = $(SHARED_SRCS)
PUSH_SWAP_SRCS += $(addprefix $(PUSH_SWAP_DIR)/, $(PUSH_SWAP_FILES))

CHECKER_SRCS = $(SHARED_SRCS)
CHECKER_SRCS += $(addprefix $(CHECKER_DIR)/, $(CHECKER_FILES))

PUSH_SWAP_OBJS_FILES = $(PUSH_SWAP_SRCS:%.c=%.o)

CHECKER_OBJS_FILES = $(CHECKER_SRCS:%.c=%.o)

PUSH_SWAP_OBJS = $(addprefix $(OBJS_PATH)/, $(PUSH_SWAP_OBJS_FILES))

CHECKER_OBJS = $(addprefix $(OBJS_PATH)/, $(CHECKER_OBJS_FILES))

.PHONY: all bonus clean fclean re norm

all: $(NAME) $(CHECKER_NAME)

$(NAME): $(LIBFT) $(PUSH_SWAP_OBJS)
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS) $(LDLIBS)

$(CHECKER_NAME): $(LIBFT) $(CHECKER_OBJS)
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS) $(LDLIBS)

$(LIBFT):
	$(MAKE) all -sC $(LIBFT_DIR)

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c | $(OBJS_DIRS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIRS): | $(OBJS_PATH)
	mkdir -p $(OBJS_DIRS) 2> /dev/null

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH) 2> /dev/null

clean:
	$(MAKE) clean -sC $(LIBFT_DIR)
	rm -rf $(LIBFT_NAME)
	rm -rf $(OBJS_PATH)

fclean: clean
	$(MAKE) fclean -sC $(LIBFT_DIR)
	rm -rf $(NAME)
	rm -rf $(CHECKER_NAME)

re: fclean all

norm:
	@clear
	@echo ""
	@echo "*** NORMINETTE ***"
	@norminette .
