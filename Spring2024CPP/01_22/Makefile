main: main.o rectangleTypeImp.o boxTypeImp.o
	g++ main.o rectangleTypeImp.o boxTypeImp.o -o main

main.o: main.cpp
	g++ -c main.cpp

rectangleTypeImp.o: rectangleTypeImp.cpp rectangleType.h
	g++ -c rectangleTypeImp.cpp

boxTypeImp.o: boxTypeImp.cpp boxType.h
	g++ -c boxTypeImp.cpp

clean:
	rm *.o main