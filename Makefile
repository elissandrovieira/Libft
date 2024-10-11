NAME=libft.a
SRC=ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c
SRC_BONUS=ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c
OBJS=$(SRC:.c=.o)
OBJS_BONUS=$(SRC_BONUS:.c=.o)
CC=cc
CC_FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)

.c.o:
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

bonus: $(OBJS_BONUS) $(OBJS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)

run:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 0

lennorm:
	clear
	norminette -R CheckForbiddenSourceHeader $(SRC) $(SRC_BONUS)

isalpha:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 1

isdigit:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 2

isalnum:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 3

isascii:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 4

isprint:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 5

strlen:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 6

memset:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 7

bzero:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 8

memcpy:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 9

memmove:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 10

strlcpy:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 11

strlcat:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 12

toupper:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 13

tolower:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 14

strchr:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 15

strrchr:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 16

strncmp:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 17

memchr:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 18

memcmp:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 19

strnstr:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 20

atoi:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 21

calloc:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 22

strdup:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 23

substr:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 24

strjoin:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 25

split:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 26

strtrim:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 27

itoa:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 28

strmapi:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 29

striteri:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 30

putchar_fd:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 31

putstr_fd:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 32

putendl_fd:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 33

putnbr_fd:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 34

lstnew:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 35

lstadd_front:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 36

lstsize:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 37

lstlast:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 38

lstadd_back:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 39

lstdelone:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 40

lstclear:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 41

lstiter:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 42

lstmap:
	clear
	$(CC) $(CC_FLAGS) main.c -L. -l:libft.a -lbsd
	./a.out 43
