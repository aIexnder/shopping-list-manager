SRC_CORRE=	Elemento.cpp  \
			corrector.cpp

OBJ_CORRE=	Elemento.o \
			Lista.o

SRC=Elemento.cpp \
	Lista.cpp \

OBJ=Elemento.o \
	Lista.o

all:
	g++ -c ${SRC}
	g++ ${OBJ} main.cpp -g -o main
corre:
	g++ -c -g ${SRC_CORRE}
	g++ -g ${OBJ_CORRE} solucion.cpp -g -o corrector

