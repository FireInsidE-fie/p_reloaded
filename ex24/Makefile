NAME = libft.a
SRCDIR = srcs/
INCDIR = includes/
CC = cc
CCFLAGS = -Wall -Wextra -Werror
CFILES = $(SRCDIR)ft_putchar.c $(SRCDIR)ft_putstr.c $(SRCDIR)ft_strcmp.c \
		 $(SRCDIR)ft_strlen.c $(SRCDIR)ft_swap.c
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) 
	ar -r $(OFILES)
%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	rm -rf $(OFILES) 
fclean: clean
	rm -rf $(NAME)
re:


