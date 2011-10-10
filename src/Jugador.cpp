#include "Jugador.hpp"

Jugador::Jugador(Croupier* croupier)
{
    croupier_ = croupier;
}



Jugador::~Jugador()
{
    //dtor
}




bool Jugador::CantarTruco() {
	return croupier_->CantarTruco();
}


bool Jugador::CantarReTruco() {
	return croupier_->CantarReTruco();
}


bool Jugador::CantarValeCuatro() {
	return croupier_->CantarValeCuatro();
}


bool Jugador::CantarEnvido() {
	return croupier_->CantarEnvido();
}


bool Jugador::CantarReal() {
	return croupier_->CantarReal();
}


bool Jugador::CantarEnvidoEnvido() {
	return croupier_->CantarEnvidoEnvido();
}


bool Jugador::CantarEnvidoReal() {
	return croupier_->CantarEnvidoReal();
}


bool Jugador::CantarEnvidoEnvidoReal() {
	return croupier_->CantarEnvidoEnvidoReal();
}


bool Jugador::CantarEnvidoFalta() {
	return croupier_->CantarEnvidoFalta();
}


bool Jugador::CantarEnvidoEnvidoFalta() {
	return croupier_->CantarEnvidoEnvidoFalta();
}


bool Jugador::CantarEnvidoRealFalta() {
	return croupier_->CantarEnvidoRealFalta();
}


bool Jugador::CantarRealFalta() {
	return croupier_->CantarRealFalta();
}


bool Jugador::CantarEnvidoEnvidoRealFalta() {
	return croupier_->CantarEnvidoEnvidoRealFalta();
}


bool Jugador::CantarFalta() {
	return croupier_->CantarFalta();
}


bool Jugador::CantarFlor() {
	return croupier_->CantarFlor();
}



void Jugador::RecibirTruco() {
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
