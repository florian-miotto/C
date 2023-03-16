# CC = gcc
# CFLAGS = -Wall -Wextra
# LDFLAGS =
# EXEC = my_first_make

# SRC_DIR = src
# OBJ_DIR = obj

# SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

# OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

# .PHONY: all clean

# all: $(EXEC)

# $(EXEC): $(OBJ_FILES)
# 	$(CC) $(LDFLAGS) $^ -o $@

# $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
# 	$(CC) $(CFLAGS) -c $< -o $@

# $(OBJ_DIR):
# 	mkdir -p $(OBJ_DIR)

# clean:
# 	rm -rf $(OBJ_DIR) $(EXEC)
.PHONY: all

SRC = main.c my_put.c
SRCS := $(SRC:.c=.o)

TARGET = my_make_evolve

COMP_FLAG = c
OBJ_FLAG = o

$(TARGET): $(SRCS)
    gcc -$(OBJ_FLAG) $(TARGET) $(SRCS)

all:
    $(TARGET)