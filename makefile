# Used to compile VVVVVV and tinyxml
CPP_COMPILER = g++
CPP_CFLAGS = -std=c++14 -MMD -Iinclude/
CPP_LFLAGS = -lSDL2 -lSDL2_mixer

# Used to compile physfs and lodepng
C_COMPILER = gcc
C_CFLAGS = -MMD -Iinclude/

C_SRCS = $(shell find src/ -name '*.c')
C_OBJS = $(patsubst src/%.c, build/%.o, ${C_SRCS})
C_DEPS = $(patsubst src/%.c, build/%.d, ${C_SRCS})

CPP_SRCS = $(shell find src/ -name '*.cpp')
CPP_OBJS = $(patsubst src/%.cpp, build/%.o, ${CPP_SRCS})
CPP_DEPS = $(patsubst src/%.cpp, build/%.d, ${CPP_SRCS})

BINARY_NAME = vvvvvv
BINARY_PATH = bin/${BINARY_NAME}

all: ${BINARY_PATH}

clean:
	-rm -rf build/ ${BINARY_PATH}

check: all
	cd bin/ && ./${BINARY_NAME}

directories:
	mkdir -p bin/ build/lodepng build/physfs build/src build/tinyxml

debug:
	echo "CPP Source files:"
	echo ${CPP_SRCS}
	echo ""
	echo "C Source files:"
	echo ${C_SRCS}

.PHONY: all clean check directories debug

${BINARY_PATH}: directories ${CPP_OBJS} ${C_OBJS}
	${CPP_COMPILER} ${C_OBJS} ${CPP_OBJS} ${CPP_LFLAGS} -o $@

build/%.o: src/%.cpp
	${CPP_COMPILER} ${CPP_CFLAGS} -c $< -o $@

build/%.o: src/%.c
	${C_COMPILER} ${C_CFLAGS} -c $< -o $@

-include ${CPP_DEPS}

-include ${C_DEPS}