# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 11:13:00 by cvidot            #+#    #+#              #
#    Updated: 2023/02/13 16:17:25 by cvidot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strnstr.c		\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_atoi.c		\
		ft_strdup.c     \
		ft_substr.c		\
		ft_strtrim.c	\
		ft_strjoin.c	\
		ft_calloc.c		\
		ft_putchar_fd.c		\
		ft_itoa.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_split.c		\
		ft_strmapi.c		\
		ft_striteri.c

BONUS_SRCS = ft_lstadd_front.c	\
		ft_lstnew.c			\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c

NAME = libft.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
BONUS_OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(BONUS_OBJS))

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@cc $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS_PREFIXED)
	@ar r $(NAME) $(OBJS_PREFIXED)

bonus: $(BONUS_OBJS_PREFIXED)
	@ar r $(NAME) $(BONUS_OBJS_PREFIXED)

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all


