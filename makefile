main : main.cpp Mino.cpp genMino.o MinoS.cpp MinoL.cpp MinoI.cpp MinoT.cpp MinoZ.cpp
	g++ -o main main.cpp Mino.cpp genMino.o MinoS.cpp MinoL.cpp MinoI.cpp MinoT.cpp MinoZ.cpp
genMino.o : genMino.cpp genMino.h
	g++ -c genMino.cpp

Clean :
	rm *.o
