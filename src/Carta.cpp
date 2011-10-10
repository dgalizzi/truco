#include "Carta.hpp"

Carta::Carta(palo mi_palo, byte valor, byte jerarquia)
{
	palo_ = mi_palo;
	valor_ = valor;
	jerarquia_ = jerarquia;
}

Carta::~Carta()
{
    //dtor
}
