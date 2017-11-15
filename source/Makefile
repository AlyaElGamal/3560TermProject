all: build

build: motion.o
	g++ motion.o -o projectiles

#GUI.o: GUI.cpp
#	g++ -c GUI.cpp

motion.o: motion.cpp motion.h gravity.h
	g++ -c motion.cpp

clean:
	rm *.o projectiles
