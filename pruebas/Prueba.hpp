#include "Croupier.hpp"
#include "Jugador.hpp"

typedef unsigned char byte;

class Prueba : public Jugador {
		Carta aTirar;
public:
	void RecibirEnvido(byte puntos_quiero, byte puntos_no_quiero) {
		if (flor_ > 0) {
			CantarFlor();
		} else if (envido_ > 27) {
			CantarEnvidoEnvido();
		} else if (envido_ == 0) {
			CantarFalta();
		} else if (envido_ > 23) {
			CantarQuiero();
		} else {
			CantarNoQuiero();
		}
	}

	Carta PrimeraRonda() {
		aTirar = PeorCarta();
		if (flor_ > 0) {
			if (!historial_.recibiFlor)
			       	CantarFlor();
		} else if (envido_ > 23) {
			if (!historial_.recibiEnvido)
				CantarReal();
		}
	       	if (EstoySuperCargado()) {
			if (CantarTruco()) {
				aTirar = MejorCarta();
			}

		}

		return aTirar;
	}

	void RecibirTruco() {
		if (mano_
};
