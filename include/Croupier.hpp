#ifndef CROUPIER_H
#define CROUPIER_H

#include <vector>

#include "Carta.hpp"

class Croupier {
	// Cuantos puntos a ganar
	byte puntos_max_;

	// Se juega con cantora?
	bool cantora_;

	// Baraja de 40 cartas
	vector<int> baraja_;

	void Mezclar();


};

#endif
