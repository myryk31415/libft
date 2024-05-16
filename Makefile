# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 15:34:56 by padam             #+#    #+#              #
#    Updated: 2024/05/16 16:54:23 by padam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes -lm

SRC_PATH = src
OBJ_PATH = obj

OBJ_DIRS =	ft_char	ft_fd	ft_mem	ft_nb		ft_str		ft_prtf		\
			ft_lst	ft_vec	ft_math

SRCS_CHAR =	ft_isalnum.c		ft_isascii.c		ft_isprint.c		\
			ft_isalpha.c		ft_isdigit.c		ft_tolower.c		\
			ft_toupper.c

SRCS_FD =	ft_putchar.c		ft_putendl_fd.c		ft_putstr.c			\
			ft_putchar_fd.c		ft_putnbr.c			ft_putstr_fd.c		\
			ft_putendl.c		ft_putnbr_fd.c

SRCS_LST =	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c		\
			ft_lstdelone.c		ft_lstiter.c		ft_lstlast.c		\
			ft_lstmap.c			ft_lstnew.c			ft_lstsize.c

SRCS_MATH = magnitude.c

SRCS_MEM =	ft_bzero.c			ft_calloc.c			ft_memchr.c			\
			ft_memcmp.c			ft_memcpy.c			ft_memmove.c		\
			ft_memset.c

SRCS_NB =	ft_abs.c			ft_atoi.c			ft_isint.c			\
			ft_isnumber.c		ft_itoa.c

SRCS_PRTF =	cases.c				ft_printf.c			helper.c			\
			lst_fncts_two.c		lst_fncts.c

SRCS_STR =	ft_split.c			ft_strchr.c			ft_strdup.c			\
			ft_striteri.c		ft_strjoin.c		ft_strlcat.c		\
			ft_strlcpy.c		ft_strlen.c			ft_strmapi.c		\
			ft_strncmp.c		ft_strnstr.c		ft_strrchr.c		\
			ft_strtrim.c		ft_substr.c			get_next_line.c		\
			ft_split_multi.c

SRCS_VEC =	basic_math.c		length.c

SRC_NAME =	$(addprefix ft_char/,	$(SRCS_CHAR))	\
			$(addprefix ft_fd/,		$(SRCS_FD))		\
			$(addprefix ft_lst/,	$(SRCS_LST))	\
			$(addprefix ft_math/,	$(SRCS_MATH))	\
			$(addprefix ft_mem/,	$(SRCS_MEM))	\
			$(addprefix ft_nb/,		$(SRCS_NB))		\
			$(addprefix ft_prtf/,	$(SRCS_PRTF))	\
			$(addprefix ft_str/,	$(SRCS_STR))	\
			$(addprefix ft_vec/,	$(SRCS_VEC))	\

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJS = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@printf "%-200s\r" "$(NAME) compiled"

$(OBJ_PATH)	:
	@mkdir -p $(OBJ_PATH)
	@mkdir -p $(addprefix $(OBJ_PATH)/, $(OBJ_DIRS))

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c | $(OBJ_PATH)
	@printf "%-100s\r" "$(CC) $(CFLAGS) -o $@"
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: all
