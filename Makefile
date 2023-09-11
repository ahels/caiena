all: caiena

caiena: caiena.cpp
	g++ -o caiena caiena.cpp

clean:
	rm -f .o caiena
