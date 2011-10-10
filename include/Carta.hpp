#ifndef CARTA_H
#define CARTA_H
typedef unsigned char byte;

struct Carta {

	Carta(palo mi_palo, byte valor, byte jerarquia);

    enum Palo { espada = 0, basto, oro, copa };

    byte valor_;
    byte jerarquia_;
	palo palo_;

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
