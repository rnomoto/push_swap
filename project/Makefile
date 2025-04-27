TARGET = push_swap
SRCS = *.c
OBJS = $(SRCS:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I libft
LIBFT_DIR = libft
LIBFT_NAME = libft.a
RM = rm -f

#compile(maybe not necessary)
#%.o: %.c
#	$(CC) $(CFLAGS) -c -o $@ $<


$(TARGET): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFT_DIR)/$(LIBFT_NAME)

all: $(TARGET)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re

