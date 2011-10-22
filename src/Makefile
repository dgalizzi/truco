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

Croupier.o: Croupier.cpp
	@echo "Compilando Croupier.cpp"
	$(CC) $(CFLAGS) Croupier.cpp

Jugador.o: Jugador.cpp
	@echo "Compilando Jugador.cpp"
	$(CC) $(CFLAGS) Jugador.cpp

Carta.o: Carta.cpp
	@echo "Compilando Carta.cpp"
	$(CC) $(CFLAGS) Carta.cpp

Estado.o: Estado.cpp
	@echo "Compilando Estado.cpp"
	$(CC) $(CFLAGS) Estado.cpp

clean: #limpieza
	@echo "Limpiando objetos"
	rm -rf *.o truco
	@echo "Limpiando binario"
	rm -rf $(BINDIR)/$(OUTFILE)
