# Used to compile VVVVVV and tinyxml
CPP_COMPILER = g++
CPP_CFLAGS = -std=c++17 -Wall -Wextra -Iinclude/
CPP_LFLAGS = -Wall -lSDL2 -lSDL2_mixer

# Used to compile physfs and lodepng
C_COMPILER = gcc
C_CFLAGS = -Iinclude/

C_SRCS = $(shell find src/ -name '*.c')
C_OBJS = $(patsubst src/%.c, build/%.o, ${C_SRCS})
C_DEPS = $(patsubst src/%.c, build/%.d, ${C_SRCS})

CPP_SRCS = $(shell find src/ -name '*.cpp')
CPP_OBJS = $(patsubst src/%.cpp, build/%.o, ${CPP_SRCS})
CPP_DEPS = $(patsubst src/%.cpp, build/%.d, ${CPP_SRCS})

BINARY_NAME = vvvvvv
BINARY_PATH = bin/${BINARY_NAME}

ASSET_DOWNLOAD_FILE = vvvvvv-mp-11192019-bin
ASSET_DOWNLOAD_URL = http://www.flibitijibibo.com/${ASSET_DOWNLOAD_FILE}
ASSET_FILE_NAME = data.zip

all: ${BINARY_PATH} bin/${ASSET_FILE_NAME}

clean:
	-rm -rf ${CPP_OBJS} ${C_OBJS} ${CPP_DEPS} ${C_DEPS} ${BINARY_PATH}

check: all
	cd bin/ && ./${BINARY_NAME}

check-syntax:
	${CPP_COMPILER} ${C_CFLAGS} -fsyntax-only ${CPP_SRCS}

directories:
	mkdir -p bin/ build/lodepng build/physfs build/src build/tinyxml

format:
	clang-format -i $(shell find src/ -maxdepth 1 -name *.cpp) $(shell find include/ -maxdepth 1 -name *.hpp)

.PHONY: all clean check check-syntax directories format

${BINARY_PATH}: directories  ${CPP_OBJS} ${C_OBJS}
	${CPP_COMPILER} ${C_OBJS} ${CPP_OBJS} ${CPP_LFLAGS} -o $@

build/%.o: src/%.cpp
	${CPP_COMPILER} ${CPP_CFLAGS} -MMD -c $< -o $@

build/%.o: src/%.c
	${C_COMPILER} ${C_CFLAGS} -MMD -c $< -o $@

bin/${ASSET_FILE_NAME}: build/data/${ASSET_FILE_NAME}
	cp $< $@

build/data/${ASSET_FILE_NAME}: build/${ASSET_DOWNLOAD_FILE}
	-unzip -u -d build/ build/${ASSET_DOWNLOAD_FILE}

build/${ASSET_DOWNLOAD_FILE}:
	wget ${ASSET_DOWNLOAD_URL} -O $@

-include ${CPP_DEPS}

-include ${C_DEPS}