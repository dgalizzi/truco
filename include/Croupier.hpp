#ifndef CROUPIER_H
#define CROUPIER_H

#include <iostream>
#include <vector>
#include <map>
#include <string>

#include "Carta.hpp"
#include "Jugador.hpp"

class Croupier {
	// Cuantos puntos a ganar
	byte puntos_max_;

	// Se juega con cantora?
	bool cantora_;

	// Baraja de 40 cartas
	std::vector<Carta> baraja_;

	// Map de mensajes a mostrar
	std::map<std::string, std::string> mensajes_;

	Jugador jugador1_, jugador2_;

	void Init();
	// Random shuffle sobre la baraja
	void Barajar();

public:
	Croupier();
	void CrearCartas();

protected:
	friend class Jugador;
	bool CantarTruco();
	bool CantarReTruco();
	bool CantarValeCuatro();
	bool CantarEnvido();
	bool CantarReal();
	bool CantarEnvidoEnvido();
	bool CantarEnvidoReal();
	bool CantarEnvidoEnvidoReal();
	bool CantarEnvidoFalta();
	bool CantarEnvidoEnvidoFalta();
	bool CantarEnvidoRealFalta();
	bool CantarRealFalta();
	bool CantarEnvidoEnvidoRealFalta();
	bool CantarFalta();
	bool CantarFlor();

};

#endif
