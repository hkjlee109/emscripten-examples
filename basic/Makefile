CXX := emcc

TARGET := basic.js
BUILD_DIR := build

SRCS := $(wildcard *.cpp)

all: $(BUILD_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): 
	${CXX} -lembind -o $(BUILD_DIR)/$(TARGET) ${SRCS}

clean:
	rm -rf $(BUILD_DIR)
