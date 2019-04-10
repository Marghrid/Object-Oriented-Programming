energy: main.o Animal.o Cat.o Dog.o
	g++ -Wall -pedantic -ansi -o energy main.o Animal.o Cat.o Dog.o

Animal.o: Animal.cpp Animal.h
	g++ -Wall -pedantic -ansi -c Animal.cpp

Cat.o: Cat.cpp Cat.h Animal.h
	g++ -Wall -pedantic -ansi -c Cat.cpp

Dog.o: Dog.cpp Dog.h Animal.h
	g++ -Wall -pedantic -ansi -c Dog.cpp

main.o: main.cpp Cat.o Dog.o Animal.o
	g++ -Wall -pedantic -ansi -c main.cpp
clean:
	del energy.exe *.o

run:
	energy.exe