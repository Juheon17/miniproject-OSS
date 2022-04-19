CC = gcc
CFLAGS = -W -Wall
TARGET = mini
DTARGET = mini_debug
OBJECTS = main.c product.o manager.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^

clean : 
	rm *.o mini mini_debug
