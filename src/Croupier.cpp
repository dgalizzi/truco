#include "Croupier.hpp"
#include <algorithm>

void Croupier::CrearCartas() {
	for (int i = 1 ; i <= 12 ; i ++) {
		if (i == 8 || i == 9) continue;
		for (int j = 0 ; j < 4 ; j ++)
				baraja_.push_back(Carta(static_cast<Carta::Palo>(j), i));
				baraja_.back().MostrarCarta();
	}
}

void Croupier::Barajar() {
	std::random_shuffle(baraja_.begin(), baraja_.end());
}


bool Croupier::CantarTruco() {
}

bool Croupier::CantarReTruco() {
}

bool Croupier::CantarValeCuatro() {
}

bool Croupier::CantarEnvido() {
}

bool Croupier::CantarReal() {
}

bool Croupier::CantarEnvidoEnvido() {
}

bool Croupier::CantarEnvidoReal() {
}

bool Croupier::CantarEnvidoEnvidoReal() {
}

bool Croupier::CantarEnvidoFalta() {
}

bool Croupier::CantarEnvidoEnvidoFalta() {
}

bool Croupier::CantarEnvidoRealFalta() {
}

bool Croupier::CantarRealFalta() {
}

bool Croupier::CantarEnvidoEnvidoRealFalta() {
}

bool Croupier::CantarFalta() {
}

bool Croupier::CantarFlor() {
}

