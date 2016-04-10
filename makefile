CC=gcc
DEPS = sort_functions.h
TARGET = sort
OBJS =  sort_main.o selectionSort.o bubbleSort.o insertionSort.o quickSort.o swap.o

%.o: %.c $(DEPS)
	$(CC) -o $@ -c $<

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ 

clean:
	rm *.o

cleanAll:
	rm $(TARGET) *.o
