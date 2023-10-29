NAME = program_teste_libft

SRCS = /nfs/homes/rbutzke/projetolibft/testes_LIB/src_teste/

INCLUDES = /nfs/homes/rbutzke/projetolibft/testes_LIB/includes

INCLUDES_LIB = /nfs/homes/rbutzke/projetolibft/libft

FILES = $(SRCS)/main_libft.c \
	$(SRCS)teste_ft_isascii.c \
	$(SRCS)teste_ft_isstring.c \
	$(SRCS)teste_memset.c \
	$(SRCS)teste_bzero.c \
	$(SRCS)teste_memcpy.c\
	$(SRCS)teste_ft_memmove.c\
	$(SRCS)teste_ft_strlcpy.c\
	$(SRCS)teste_ft_strlcat.c\
	$(SRCS)teste_ft_toupper.c\
	$(SRCS)teste_to_lower.c\
	$(SRCS)teste_ft_strchr.c\
	$(SRCS)teste_strncmp.c\
	$(SRCS)teste_ft_memchr.c\
	$(SRCS)teste_ft_memcmp.c\
	$(SRCS)teste_ft_strrstr.c\
	$(SRCS)teste_ft_atoi.c\
	$(SRCS)ft_print_array_size.c\
	$(SRCS)ft_valid_inside_array.c\
	$(SRCS)ft_isupper.c\
	$(SRCS)teste_ft_strrchr.c\
	$(SRCS)ft_lower.c\
	$(SRCS)teste_ft_strdup.c\
	$(SRCS)teste_ft_substr.c\
	$(SRCS)teste_ft_strtrim.c\
	$(SRCS)teste_ft_itoe.c\
	$(SRCS)teste_ft_split.c\
	$(SRCS)teste_linked_list.c\
	$(SRCS)teste_ft_lstadd_front.c\
	$(SRCS)teste_ft_lstadd_back.c\
	$(SRCS)teste_ft_lstsize.c\
	$(SRCS)teste_ft_lstlast.c\
	$(SRCS)teste_ft_lstdelone.c\
	$(SRCS)teste_ft_lstclear.c\
	$(SRCS)teste_ft_lstiter.c\
	$(SRCS)teste_ft_lstmap.c

LIB = /nfs/homes/rbutzke/projetolibft/libft/libft.a

INCLUDES_MYLIB = /nfs/homes/rbutzke/projetolibft/libft

MAKE_LIB_A = /nfs/homes/rbutzke/projetolibft/libft/

CC = cc

CFLAGS = -Wall -Werror -Wextra 

all: lib $(NAME)

lib:
	@$(MAKE) -C $(MAKE_LIB_A)

$(NAME):
	@$(CC) -g3 -lbsd $(FILES) $(LIB) -I$(INCLUDES_MYLIB) -I$(INCLUDES) -o $(NAME)

clean:
	rm -rf $(NAME)
	$(MAKE) -C $(MAKE_LIB_A) clean

fclean:
	rm -rf $(NAME)
	$(MAKE) -C $(MAKE_LIB_A) fclean	

re: fclean all
	$(MAKE) -C $(MAKE_LIB_A) re

