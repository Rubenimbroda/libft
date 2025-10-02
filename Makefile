# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 14:20:33 by rnuno-im          #+#    #+#              #
#    Updated: 2025/10/02 18:52:15 by rnuno-im         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libft.a

cc 		=	cc -Werror -Wall -Wextra

SRCS 	= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
			ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
			
OBJS	= $(SRCS: .c=.o)

AR		= ar rcs
RM		= rm -rf

all: $(NAME)

clean:

fcclean:

re: