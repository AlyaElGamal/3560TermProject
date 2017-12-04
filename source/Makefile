##################################################################################
# Authors:      Ignatius Smith                                                  
#               Ohio University, B.S.C.S. May 2020                             
#	        is116615@ohio.edu   
#		
#		Jacob Ramsey
#		Ohio Univeristy, B.S.C.S May 2020
#		jr408614@ohio.edu
#
#		Alya ElGamal
#
#		Charlie Harover
#                                            
# File:         Makefile                      
# Last Modified:17 November 2017                                                
##################################################################################

all: build

build: motion.o
	g++ motion.o -o projectiles

#GUI.o: GUI.cpp
#	g++ -c GUI.cpp

motion.o: motion.cpp motion.h gravity.h
	g++ -c motion.cpp

clean:
	rm *.o projectiles a.out
