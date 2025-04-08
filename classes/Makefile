CXX := emcc

BUILD_DIR := ./build

SOURCES := $(wildcard *.cpp)

all: 
	mkdir -p $(BUILD_DIR)
	${CXX} -lembind -o $(BUILD_DIR)/classes.js ${SOURCES}

clean:
	rm -rf $(BUILD_DIR)
