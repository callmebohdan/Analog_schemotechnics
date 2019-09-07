TARGET = lab1_threads

CC = gcc

CFLAGS = -O2 -lpthread -Wall

SRC = lab1_threads.c

all:	$(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(SRC) $(CFLAGS) -o $@ 

.c.o:
	$(CC) $(CFLAGS) $< -o $@ 

clean:
	@echo Tidying things up...
	rm -f *.o *.obj
	rm -f $(TARGET)
