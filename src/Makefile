CC = g++ 			#compilador
CFLAGS = -c -Wall -I../include/	#banderas
OUTPUT = -o truco.bin

all: truco #compilar todo

truco: main.o Croupier.o Jugador.o Carta.o Estado.o
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
	rm -rf *.o truco
