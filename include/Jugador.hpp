#ifndef JUGADOR_H
#define JUGADOR_H

#include "Estado.hpp"
#include <string>

class Croupier;

class Jugador
{
	public:
	Estado estado_;
	Croupier *croupier_;
	Jugador();
	Jugador(Croupier *);
	~Jugador();

	/* Faltaria agregar aca el nombre del jugador, y otros parametros
	 * similares a ese, no? */
	std::string nombre_;

	virtual void PrimeraRonda() {};
	virtual void SegundaRonda() {};
	virtual void TerceraRonda() {};

	protected:
	bool CantarTruco();
	bool CantarReTruco();
	bool CantarValeCuatro();
	bool CantarEnvido();
	bool CantarReal();
	bool CantarEnvidoEnvido();
	bool CantarEnvidoReal();
	bool CantarEnvidoEnvidoReal();
	bool CantarEnvidoFalta();
	bool CantarEnvidoEnvidoFalta();
	bool CantarEnvidoRealFalta();
	bool CantarRealFalta();
	bool CantarEnvidoEnvidoRealFalta();
	bool CantarFalta();
	bool CantarFlor();


	void RecibirTruco();
	void RecibirReTruco();
	void RecibirValeCuatro();
	void RecibirEnvido();
	void RecibirReal();
	void RecibirEnvidoEnvido();
	void RecibirEnvidoReal();
	void RecibirEnvidoEnvidoReal();
	void RecibirEnvidoFalta();
	void RecibirEnvidoEnvidoFalta();
	void RecibirEnvidoRealFalta();
	void RecibirRealFalta();
	void RecibirEnvidoEnvidoRealFalta();
	void RecibirFalta();
	void RecibirFlor();

	void CantarQuiero();
	void CantarNoQuiero();

	private:

};

#endif // JUGADOR_H
