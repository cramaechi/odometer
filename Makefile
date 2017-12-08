odometer: main.o odometer.o
	g++ main.o odometer.o -o odometer

main.o: main.cpp
	g++ -c main.cpp

odometer.o: odometer.cpp
	g++ -c odometer.cpp

clean:
	rm *.o odometer
