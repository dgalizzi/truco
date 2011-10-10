#ifndef ESTADO_H
#define ESTADO_H


struct Estado
{
	Estado();

	bool recibi_envido_;
	bool recibi_real_;
	bool recibi_envido_envido_;
	bool recibi_envido_real_;
	bool recibi_envido_envido_real_;
	bool recibi_envido_falta_;
	bool recibi_envido_envido_falta_;
	bool recibi_envido_real_falta_;
	bool recibi_real_falta_;
	bool envido_envido_real_falta_;
	bool recibi_falta_;

	bool recibi_flor_;

	bool recibi_truco_;
	bool recibi_retruco_;
	bool recibi_vale_cuatro_;
};

#endif // ESTADO_H
