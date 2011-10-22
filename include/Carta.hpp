#ifndef CARTA_H
#define CARTA_H

#include <iostream>
typedef unsigned char byte;

struct Carta {

	enum Palo { espada = 0, basto, oro, copa };
	
	Carta(Palo mi_palo, byte valor, byte jerarquia);
	Carta(Palo mi_palo, byte valor);

	byte valor_;
	byte jerarquia_;
	Palo palo_;

	bool operator <= (const Carta &a_comparar) {
		return jerarquia_ <= a_comparar.jerarquia_;
	}

	bool operator < (const Carta &a_comparar) {
		return jerarquia_ < a_comparar.jerarquia_;
	}

	bool operator >= (const Carta &a_comparar) {
		return jerarquia_ >= a_comparar.jerarquia_;
	}

	bool operator > (const Carta &a_comparar) {
		return jerarquia_ > a_comparar.jerarquia_;
	}

	bool operator == (const Carta &a_comparar) {
		return jerarquia_ == a_comparar.jerarquia_;
	}

	void MostrarCarta() {
		std::cout << valor_ << ":" << jerarquia_ << ":" << int(palo_) <<
		std::endl;
	}
};

#endif // CARTA_H
