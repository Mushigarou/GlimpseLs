#----------------------------------------------------------------------------------------------
# Source Files
#----------------------------------------------------------------------------------------------

SRC =	conversion_functions/ft_atoi.c	\
		conversion_functions/ft_itoa.c	\
		dynamic_allocation/ft_calloc.c	\
		memory_functions/ft_bzero.c		\
		memory_functions/ft_memchr.c	\
		memory_functions/ft_memcmp.c	\
		memory_functions/ft_memcpy.c	\
		memory_functions/ft_memmove.c	\
		memory_functions/ft_memset.c	\
		data_structures/singly_linked_list/ft_lstadd_back.c	\
		data_structures/singly_linked_list/ft_lstadd_front.c	\
		data_structures/singly_linked_list/ft_lstclear.c	\
		data_structures/singly_linked_list/ft_lstdelone.c	\
		data_structures/singly_linked_list/ft_lstiter.c	\
		data_structures/singly_linked_list/ft_lstlast.c	\
		data_structures/singly_linked_list/ft_lstmap.c	\
		data_structures/singly_linked_list/ft_lstnew.c	\
		data_structures/singly_linked_list/ft_lstsize.c	\
		string_functions/ASCII_functions/ft_isalnum.c	\
		string_functions/ASCII_functions/ft_isalpha.c	\
		string_functions/ASCII_functions/ft_isascii.c	\
		string_functions/ASCII_functions/ft_isdigit.c	\
		string_functions/ASCII_functions/ft_isprint.c	\
		string_functions/ASCII_functions/ft_tolower.c	\
		string_functions/ASCII_functions/ft_toupper.c	\
		string_functions/dynamic_alloc/ft_strdup.c	\
		string_functions/ft_putchar_fd.c	\
		string_functions/ft_putendl_fd.c	\
		string_functions/ft_putnbr_fd.c	\
		string_functions/ft_putstr_fd.c	\
		string_functions/ft_split.c	\
		string_functions/ft_strchr.c	\
		string_functions/ft_striteri.c	\
		string_functions/ft_strjoin.c	\
		string_functions/ft_strlcat.c	\
		string_functions/ft_strlcpy.c	\
		string_functions/ft_strlen.c	\
		string_functions/ft_strmapi.c	\
		string_functions/ft_strncmp.c	\
		string_functions/ft_strnstr.c	\
		string_functions/ft_strrchr.c	\
		string_functions/ft_strtrim.c	\
		string_functions/ft_substr.c

#----------------------------------------------------------------------------------------------
# Adding the object directory path as a prefix to the source files
#----------------------------------------------------------------------------------------------
OBJS = $(patsubst %, $(OBJ_DIR)/%, $(SRC:.c=.o))

# x:
# 	@echo $(OBJS)
#----------------------------------------------------------------------------------------------
# Variables
#----------------------------------------------------------------------------------------------
NAME = libft.a

CFLAGS = -Werror -Wextra -Wall

HEADER = inc/libft.h

INC_HEADER = -Iinc

OBJ_DIR = obj

RM = /bin/rm -rf

#----------------------------------------------------------------------------------------------
# Terminal ANSI colors
#----------------------------------------------------------------------------------------------
Green ='\033[1;32m'
Blue = '\033[1;91m'
NC ='\033[0m'

#----------------------------------------------------------------------------------------------
# Main dependencies
#----------------------------------------------------------------------------------------------
all : $(NAME)

$(NAME) : $(OBJS)
	@ printf ${Green}"😂 libft.a is ready to be linked 😂\n"${NC}
	@ ar rcs $(NAME) $(OBJS)

obj/%.o : %.c $(HEADER)
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) $(INC_HEADER) -c $< -o $@

#----------------------------------------------------------------------------------------------
# Deleting object files
#----------------------------------------------------------------------------------------------
clean :
	$(RM) $(OBJ_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

#----------------------------------------------------------------------------------------------
# Special Built-in Target Names
#----------------------------------------------------------------------------------------------
.Phony : all clean fclean re
.SILENT : $(OBJ_DIR) bonus $(NAME) fclean clean
# .DEFAULT_GOAL := all
