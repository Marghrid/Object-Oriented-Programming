/** FILE: Desconto.h   **   Margarida Ferreira   **   80832  **/
#ifndef __DESCONTO__
#define __DESCONTO__

class Cliente;

class Desconto {
protected:
	Cliente *_cliente;

public:
	Desconto(Cliente *cliente) {
		_cliente = cliente;
	}

	virtual ~Desconto() {}

	virtual double get_desconto() const = 0;
	virtual void atualiza() = 0;
};
#endif