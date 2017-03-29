lab2: calElo.o main.o
	g++ -o lab2 calElo.o main.o

calElo.o: calElo.cpp calElo.h
	g++ -c calElo.cpp

main.o: main.cpp calElo.h
	g++ -c main.cpp

clean:
	rm lab2 *.o

