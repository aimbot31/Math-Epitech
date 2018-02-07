NAME	= PongEvolution

CC	= gcc

RM	= rm -f

SRCS	= ./Game/Events/events_player.c \
	./Game/ball.c \
	./Game/create_shapes.c \
	./Game/draw_shapes.c \
	./Game/game_brain.c \
	./Window/window_basics_event.c \
	./main.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./Include/
CFLAGS += -W 

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -l c_graph_prog

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
