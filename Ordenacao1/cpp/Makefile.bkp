CC = g++
CC_C = gcc
CFLAGS += -Wall -std=c++11 -w -g

LIBS += \
-Iinclude \
-lm

SRC_DIR = src
BUILD_DIR = obj
DIST_DIR = bin

EXEC = ord1

SOURCES = $(shell find $(SRC_DIR) -name "*.cpp" -printf "%f\n")
OBJS = $(SOURCES:%.cpp=$(BUILD_DIR)/%.o)

all: directories $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(DIST_DIR)/$(EXEC)

debug: CFLAGS += -g
debug: all

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< $(LIBS) -o $@

run:
	$(DIST_DIR)/$(EXEC)

directories:
	mkdir -p $(BUILD_DIR)
	mkdir -p $(DIST_DIR)

clean:
	rm -rf $(BUILD_DIR)/
	rm -rf $(DIST_DIR)/
