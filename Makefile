CC = gcc
CFLAGS = -Wall -std=c99
TARGET = program
OBJS = main.o mathutils.OBJS

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
main.o: main.c mathutils.h
mathutils.0: mathutils.c mathutils.h

clean:
	rm -f $(OBJS) $(TARGET)

run: 
	./program