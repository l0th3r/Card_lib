# COMPILER
CC=gcc

# FILES
FILES= types/types.c manipulate/manipulate.c display/display.c main.c

# FLAGS
NORME_FLAGS= -std=c89 -pedantic
DEBUG_FLAGS= -Wall -Werror -g
BEFORE_FLAGS= $(NORME_FLAGS) $(DEBUG_FLAGS)

debug:$(FILES)
	$(CC) $(BEFORE_FLAGS) $(FILES) -odebug