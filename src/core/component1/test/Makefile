# Variables
CC = gcc
CFLAGS = -I../../../../include -I../../../../Unity
SRC_DIR = ../../component1
OBJ_DIR = .
TEST_DIR = .
UNITY_DIR = ../../../../Unity
TARGET = test_component1

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJS = $(patsubst $(TEST_DIR)/%.c, $(OBJ_DIR)/%.o, $(TEST_SRCS))
UNITY_SRCS = $(UNITY_DIR)/unity.c
UNITY_OBJS = $(OBJ_DIR)/unity.o

# Rules
all: $(TARGET)

$(TARGET): $(OBJS) $(TEST_OBJS) $(UNITY_OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/unity.o: $(UNITY_SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)

.PHONY: all clean