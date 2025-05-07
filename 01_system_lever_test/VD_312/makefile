CC = gcc
CFLAGS = -Wall -g
TARGET = VD_312 
SRC = VD_312.c

all: $(TARGET) run

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
.PHONY: all run clean
