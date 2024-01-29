main: main.o circleTypeImp.o cylinderTypeImp.o
	g++ main.o circleTypeImp.o cylinderTypeImp.o -o main

main.o: main.cpp
	g++ -c main.cpp

circleTypeImp.o: circleTypeImp.cpp circleType.h
	g++ -c circleTypeImp.cpp

cylinderTypeImp.o: cylinderTypeImp.cpp cylinderType.h
	g++ -c cylinderTypeImp.cpp

clean:
	rm *.o main
