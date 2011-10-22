#include "Croupier.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>

Croupier::Croupier() {
	Init();
}

void Croupier::Init() {
	using namespace std;
	ifstream ifs("config/mensajes.cfg");
	if (!ifs.is_open()) cout << "ERROR AL ABRIR ARCHIVO" << endl;

	string f;
	while (ifs >> f)
	{
		if (f == ";") {
			getline(ifs, f);
			continue;
		}
		cout << f << endl;
		char c;
		do {
			ifs.get(c);
		} while (c == ' ' || c == '=');

		f.clear();
		ifs.get(c);
		do {
			f = f + c;
			ifs.get(c);
		} while (c != '"');
		cout << f << endl;
		getline(ifs, f);
	}
}

void Croupier::CrearCartas() {
	for (int i = 1 ; i <= 12 ; i ++) {
		if (i == 8 || i == 9) continue;
		for (int j = 0 ; j < 4 ; j ++) {
				baraja_.push_back(Carta(static_cast<Carta::Palo>(j), i));
				baraja_.back().MostrarCarta();
		}
	}
}

void Croupier::Barajar() {
	std::random_shuffle(baraja_.begin(), baraja_.end());
}


bool Croupier::CantarTruco() {
	return true;
}

bool Croupier::CantarReTruco() {
	return true;
}

bool Croupier::CantarValeCuatro() {
	return true;
}

bool Croupier::CantarEnvido() {
	return true;
}

bool Croupier::CantarReal() {
	return true;
}

bool Croupier::CantarEnvidoEnvido() {
	return true;
}

bool Croupier::CantarEnvidoReal() {
	return true;
}

bool Croupier::CantarEnvidoEnvidoReal() {
	return true;
}

bool Croupier::CantarEnvidoFalta() {
	return true;
}

bool Croupier::CantarEnvidoEnvidoFalta() {
	return true;
}

bool Croupier::CantarEnvidoRealFalta() {
	return true;
}

bool Croupier::CantarRealFalta() {
	return true;
}

bool Croupier::CantarEnvidoEnvidoRealFalta() {
	return true;
}

bool Croupier::CantarFalta() {
	return true;
}

bool Croupier::CantarFlor() {
	return true;
}

