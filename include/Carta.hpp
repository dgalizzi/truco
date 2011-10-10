#ifndef CARTA_H
#define CARTA_H
typedef unsigned char byte;

struct Carta {
private:
	Carta();
	virtual ~Carta();

    enum palo { espada = 0, basto, oro, copa };
    byte valor_;
    byte jerarquia_;

protected:
	// esto es un comentario
	int algo;
};

#endif // CARTA_H
