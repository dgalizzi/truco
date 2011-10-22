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

	// Random shuffle sobre la baraja
	void Mezclar();

	Jugador jugador1_, jugador2_;
public:
	void crearCartas()
	{
		for (int i = 1 ; i <= 12 ; i ++)
		{
			if (i == 8 || i == 9) continue;
			for (int j = 0 ; j < 4 ; j ++) {
				baraja_.push_back(Carta(static_cast<Carta::Palo>(j), i));
				baraja_.back().MostrarCarta();
			}
		}
	}

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
