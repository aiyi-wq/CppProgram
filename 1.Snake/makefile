COMPLIER := g++
COMPLIER_FLAGS := -Wall -std=c++11

SRC := main.cpp
SRC += ./platform_manager/*.cpp
SRC += ./game_interface/*.cpp

LINK_FLAGS := -lncurses
all:

.PHONY : snake

EXEC_FILE_NAME := snake
snake:
$(EXEC_FILE_NAME) : $(SRC)
	$(COMPLIER) $(COMPLIER_FLAGS) $^ -o $@ $(LINK_FLAGS)
