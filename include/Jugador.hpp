#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador
{
    public:
        Jugador();
        virtual ~Jugador();

        virtual void PrimeraRonda() = 0;
        virtual void SegundaRonda() = 0;
        virtual void TerceraRonda() = 0;

        void CantarTruco();
        void CantarReTruco();
        void CantarValeCuatro();
        void CantarEnvido();
        void CantarReal();
		void CantarEnvidoEnvido();
		void CantarEnvidoReal();
		void CantarEnvidoEnvidoReal();
        void CantarEnvidoFalta();
        void CantarEnvidoEnvidoFalta();
        void CantarEnvidoRealFalta();
		void CantarRealFalta();
		void CantarEnvidoEnvidoRealFalta();
        void CantarFalta();
        void CantarFlor();

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


    protected:
    private:

};

#endif // JUGADOR_H
