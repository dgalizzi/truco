#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador
{

    public:
		Estado estado_;
		Croupier croupier_;
        Jugador();
        virtual ~Jugador();

        virtual void PrimeraRonda() = 0;
        virtual void SegundaRonda() = 0;
        virtual void TerceraRonda() = 0;
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
