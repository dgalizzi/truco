CC = g++ 			#compilador
CFLAGS = -g -c -Wall -I../include/	#banderas
BINDIR = ../bin
OUTFILE = truco.bin
OUTPUT = -o $(BINDIR)/$(OUTFILE)

all: truco #compilar todo

truco: main.o Croupier.o Jugador.o Carta.o Estado.o
	mkdir -p $(BINDIR)
	@echo "Compilando Ejecutable Truco"
	$(CC) main.o Croupier.o Jugador.o Carta.o Estado.o $(OUTPUT)
	@echo "Compilacion completada :)"

main.o: main.cpp
	@echo "Compilando main.cpp"
	$(CC) $(CFLAGS) main.cpp 

Croupier.o: ../include/Croupier.hpp
	@echo "Compilando Croupier.cpp"
	$(CC) $(CFLAGS) Croupier.cpp

Jugador.o: ../include/Jugador.hpp
	@echo "Compilando Jugador.cpp"
	$(CC) $(CFLAGS) Jugador.cpp

Carta.o: ../include/Carta.hpp
	@echo "Compilando Carta.cpp"
	$(CC) $(CFLAGS) Carta.cpp

Estado.o: ../include/Estado.hpp
	@echo "Compilando Estado.cpp"
	$(CC) $(CFLAGS) Estado.cpp

clean: #limpieza
	@echo "Limpiando objetos"
	rm -rf *.o truco
	@echo "Limpiando binario"
	rm -rf $(BINDIR)/$(OUTFILE)

ca: clean all
