CPP_COMPILER = g++
CPP_CFLAGS = -std=c++14 -MMD
CPP_LFLAGS = -lSDL2 -lSDL2_mixer

C_COMPILER = gcc
C_CFLAGS = -MMD

C_SRCS = $(shell find desktop_version/ -name '*.c')
C_OBJS = $(patsubst desktop_version/%.c, build/%.o, ${C_SRCS})
C_DEPS = $(patsubst desktop_version/%.c, build/%.d, ${C_SRCS})

CPP_SRCS = $(shell find desktop_version/ -name '*.cpp')
CPP_OBJS = $(patsubst desktop_version/%.cpp, build/%.o, ${CPP_SRCS})
CPP_DEPS = $(patsubst desktop_version/%.cpp, build/%.d, ${CPP_SRCS})

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

build/%.o: desktop_version/%.cpp
	${CPP_COMPILER} ${CPP_CFLAGS} -c $< -o $@

build/%.o: desktop_version/%.c
	${C_COMPILER} ${C_CFLAGS} -c $< -o $@

-include ${CPP_DEPS}

-include ${C_DEPS}