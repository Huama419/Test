

CC=gcc
CFLAGS=-I.
DEPS = hellomake.h
OBJ = hellomake.o hellofunc.o 

##-D EXTRA=1 will set the defined value EXTRA to 1 before gcc compile the file hellofuc.c
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -D EXTRA=1

hellomake: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) 

clean:
	rm *.o hellomake
