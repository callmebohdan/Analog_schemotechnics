TARGET = lab1

CC = gcc

CFLAGS = -lpthread

SRC = lab1.c

all:	$(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(SRC) $(CFLAGS) -o $@ 

optimization: o0 o2

o0: $(OBJ)
	$(CC) $(SRC) -o0 $(CFLAGS) $@ 

o2: $(OBJ)
	$(CC) $(SRC) -o2 $(CFLAGS) $@ 
	
.c.o:
	$(CC) $(CFLAGS) $< -o $@ 

clean:
	@echo Tidying things up...
	rm -f *.o *.obj
	rm -f $(TARGET)
