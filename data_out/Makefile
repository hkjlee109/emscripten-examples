CXX := emcc

TARGET := data_out.js
BUILD_DIR := build

SRCS := $(wildcard *.cpp)

all: $(BUILD_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): 
	${CXX} -lembind -o $(BUILD_DIR)/$(TARGET) --js-library library.js ${SRCS}

clean:
	rm -rf $(BUILD_DIR)
