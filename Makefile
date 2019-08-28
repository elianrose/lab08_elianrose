#Makefile

test: strFuncsTest.o strFuncs.o tddFuncs.o
	g++ -o tests strFuncsTest.o strFuncs.o tddFuncs.o

clean:
	/bin/rm -f *.o tests

