

# --- ft_ls Compilation Management
.DEFAULT_GOAL := all
# .SILENT : re fclean clean bonus debug debug_b re_lib lib dir $(NAME) all 

NAME := ft_ls

CC := cc
CFLAGS = -Wall -Werror -Wextra

OBJECTS_DIR := src/obj
SOURCE_CODE := ft_ls.c
OBJ_SOURCE_CODE := $(SOURCE_CODE:.c=.o)
OBJ_SOURCE_CODE_PATH := $(addprefix ${OBJECTS_DIR}/, ${OBJ_SOURCE_CODE})

HEADER := 
INCLUDE_HEADERS:= -I src/Libft 

LIBFT := src/Libft/libft.a
LIBFT_MAKEFILE := src/Libft


RM := rm

RM_FORCE := rm -rf

all: ${NAME}


${NAME} : libft create-obj-dir #${OBJ_SOURCE_CODE_PATH}
	${CC} ${CFLAGS} src/ft_ls.c ${LIBFT} -o ${NAME}

create-obj-dir:
	mkdir -p ${OBJECTS_DIR}
	
# ${OBJECTS_DIR}/%.o : src/%.c ${HEADER}
# 	${CC} ${CFLAGS} -c $< -o $@ 

libft :
	make -C ${LIBFT_MAKEFILE}

clean-libft:
	make clean -C ${LIBFT_MAKEFILE}

fclean-libft:
	make fclean -C ${LIBFT_MAKEFILE}



clean : clean-libft
	$(RM_FORCE) ${OBJECTS_DIR} 

fclean : clean fclean-libft
	$(RM) $(NAME)

re : clean-libft fclean all

#----------------------------------------------------------------------------
# --- Docker Management

IMAGE_NAME := ft_ls-dev
CONTAINER_NAME := ft_ls-dev-container
WORKDIR := /workspace

.PHONY: build run connect stop rm-docker clean-docker rebuild-docker

build:
	docker build -t $(IMAGE_NAME) .

run:
	docker run -dit \
		--name $(CONTAINER_NAME) \
		-v $(PWD):$(WORKDIR) \
		-w $(WORKDIR) \
		$(IMAGE_NAME)

connect:
	docker exec -it $(CONTAINER_NAME) bash

stop:
	-docker stop $(CONTAINER_NAME)

rm-docker:
	-docker rm $(CONTAINER_NAME)

clean-docker: stop rm

rebuild-docker: clean build run
