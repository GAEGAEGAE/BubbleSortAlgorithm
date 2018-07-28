all : BubbleSort

BubbleSort: main.o
	g++ -g -o BubbleSort main.o

main.o:
	g++ -g -c -o main.o bubble_sort_example.cpp

clean:
	rm -f BubbleSort
	rm -f *.o
