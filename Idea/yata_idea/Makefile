CC			= g++
CFLAGS		= -std=c++14 -stdlib=libc++ -O2 -MMD -MP -Wall -Wextra -Winit-self 
ifeq "$(shell getconf LONG_BIT)" "64"
  LDFLAGS	= -mpthread
else
  LDFLAGS	= -mpthread
endif
LIBS		=
TGT_DIR		= ./bin
TARGET		= Fa3GMazeRunner.out
INCLUDE		= -I ./include
SRC_ROOT	= ./src
OBJ_ROOT	= ./obj

SRC_DIR		:= $(shell find $(SRC_ROOT) -type d)
SOURCES   = $(foreach dir, $(SRC_DIR), $(wildcard $(dir)/*.cpp))
OBJECTS   = $(addprefix $(OBJ_ROOT)/, $(SOURCES:.cpp=.o)) 
OBJ_DIR   = $(addprefix $(OBJ_ROOT)/, $(SRC_DIR)) 
DEPENDS   = $(OBJECTS:.o=.d)

$(TARGET): $(OBJECTS) $(LIBS)
	$(CC) -o $(TGT_DIR)/$@ $^ $(LDFLAGS)

$(OBJ_ROOT)/%.o: $(SRC_ROOT)/%.cpp
	@if [ ! -e `dirname $@` ]; then mkdir -p `dirname $@`; fi
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

-include $(DEPENDS)