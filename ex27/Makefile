NAME = ft_display_file
CC=cc
CFLAGS=-Wall -Wextra -Werror
IDIR=include/
SDIR=src/
CFILES = $(SDIR)display_file.c $(SDIR)utils.c
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) -o $@ $^ $(CFLAGS)
%.o: %.c
	$(CC) $(CFLAGS) -I$(IDIR) -o $@ -c $<
clean:
	$(RM) $(OFILES)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: clean fclean re all
