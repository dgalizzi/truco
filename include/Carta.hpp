#ifndef CARTA_H
#define CARTA_H
typedef unsigned char byte;

struct Carta
{
    Carta();
    virtual ~Carta();

    enum palo { espada = 0, basto, oro, copa };
    byte valor_;
    byte jerarquia_;
    bool cris_puto = true;

    protected:
};

#endif // CARTA_H
