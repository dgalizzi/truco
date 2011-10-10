#ifndef ESTADO_H
#define ESTADO_H


struct Estado
{
	Estado();

	bool envido_;
	bool real_;
	bool envido_envido_;
	bool envido_real_;
	bool envido_envido_real_;
	bool envido_falta_;
	bool envido_envido_falta_;
	bool envido_real_falta_;
	bool real_falta_;
	bool envido_envido_real_falta_;
	bool falta_;

	bool flor_;

	bool truco_;
	bool retruco_;
	bool vale_cuatro_;
};

#endif // ESTADO_H
