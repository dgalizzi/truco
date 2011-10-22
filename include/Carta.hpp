#ifndef CARTA_H
#define CARTA_H
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
};

#endif // CARTA_H
