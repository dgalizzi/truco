#ifndef CROUPIER_H
#define CROUPIER_H

#include <iostream>
#include <vector>

#include "Carta.hpp"
#include "Jugador.hpp"

class Croupier {
	// Cuantos puntos a ganar
	byte puntos_max_;

	// Se juega con cantora?
	bool cantora_;

	// Baraja de 40 cartas
	std::vector<Carta> baraja_;

	Jugador jugador1_, jugador2_;

	// Random shuffle sobre la baraja
	void Barajar();

public:
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
