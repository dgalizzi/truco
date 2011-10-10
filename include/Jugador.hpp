#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador
{
    public:
        Jugador();
        virtual ~Jugador();
        virtual void PrimeraRonda();
        virtual void SegundaRonda();
        virtual void TerceraRonda();
        void CantarTruco();
        void CantarReTruco();
        void CantarValeCuatro();
        void CantarEnvido();
        void CantarReal();
        void CantarEnvidoReal();
        void CantarFalta();
        void CantarEnvidoEnvidoFalta();
        void CantarEnvidoFalta();
        void CantarRealFalta();
        void CantarEnvidoEnvido();


        void CantarFlor();




    protected:
    private:

};

#endif // JUGADOR_H
