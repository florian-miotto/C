# Fichiers sources
SRCS = $(wildcard C/jour03/job06/main.c)

# Fichiers objets
OBJS = $(patsubst %.c,%.o,$(SRCS))

# Flags de compilation
CFLAGS = -Wall -Wextra

# Nom de l'exécutable
EXEC = my_make_evolve

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	gcc $^ -o $@

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
