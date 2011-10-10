#include "Jugador.hpp"

Jugador::Jugador(Croupier* croupier)
{
    croupier_ = croupier;
}



Jugador::~Jugador()
{
    //dtor
}




bool Jugador::CantarTruco(){
	return croupier_->CantarTruco();
}


bool Jugador::CantarReTruco(){

}


bool Jugador::CantarValeCuatro(){

}


bool Jugador::CantarEnvido(){

}


bool Jugador::CantarReal(){

}


bool Jugador::CantarEnvidoEnvido(){

}


bool Jugador::CantarEnvidoReal(){

}


bool Jugador::CantarEnvidoEnvidoReal(){

}


bool Jugador::CantarEnvidoFalta(){

}


bool Jugador::CantarEnvidoEnvidoFalta(){

}


bool Jugador::CantarEnvidoRealFalta(){

}


bool Jugador::CantarRealFalta(){

}


bool Jugador::CantarEnvidoEnvidoRealFalta(){

}


bool Jugador::CantarFalta(){

}


bool Jugador::CantarFlor(){

}



void Jugador::RecibirTruco(){

}


void Jugador::RecibirReTruco(){

}


void Jugador::RecibirValeCuatro(){

}


void Jugador::RecibirEnvido(){

}


void Jugador::RecibirReal(){

}


void Jugador::RecibirEnvidoEnvido(){

}


void Jugador::RecibirEnvidoReal(){

}


void Jugador::RecibirEnvidoEnvidoReal(){

}


void Jugador::RecibirEnvidoFalta(){

}


void Jugador::RecibirEnvidoEnvidoFalta(){

}


void Jugador::RecibirEnvidoRealFalta(){

}


void Jugador::RecibirRealFalta(){

}


void Jugador::RecibirEnvidoEnvidoRealFalta(){

}


void Jugador::RecibirFalta(){

}


void Jugador::RecibirFlor(){

}
