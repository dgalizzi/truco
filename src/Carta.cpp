#include "Carta.hpp"

Carta::Carta(Palo palo, byte valor, byte jerarquia) {
	palo_ = palo;
	valor_ = valor;
	jerarquia_ = jerarquia;
}

Carta::Carta(Palo palo, byte valor) : palo_(palo), valor_(valor) {
	//                          1, 2,  3, 4, 5, 6, 7, 8, 9,10,11,12
	static byte jerarquias[] = {8, 9, 10, 1, 2, 3, 4, 0, 0, 5, 6, 7};

	jerarquia_ = jerarquias[valor - 1];

	if (palo == espada)
	{
		if (valor == 1) {
			jerarquia_ = 14;
		} else if (valor == 7) {
			jerarquia_ = 12;
		}
	}

	if (palo == basto && valor == 1)
		jerarquia_ = 13;

	if (palo == oro && valor == 7)
		jerarquia_ = 11;
}
