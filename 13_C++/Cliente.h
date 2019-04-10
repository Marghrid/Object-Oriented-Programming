/** FILE: Cliente.h   **   Margarida Ferreira   **   80832   **/
 #ifndef __CLIENTE__
 #define __CLIENTE__
 
#include "Desconto.h"
#include "SemDesconto.h"
#include <iostream>

class Cliente {
private:
	std::string _nome;
	int _n_cliente;
	int _contacto;
	int _data_nascimento;
	int _data_primeira_compra;
	int _compras_efectuadas;
	Desconto* _desconto;

public:
	Cliente(std::string nome, int n_cliente, int contacto,
		int data_nascimento, int data_primeira_compra) /* formato AAAAMMDD */ {

		_nome = nome;
		_n_cliente = n_cliente;
		_contacto = contacto;
		_data_nascimento = data_nascimento;
		_data_primeira_compra = data_primeira_compra;
		_compras_efectuadas = 0;
		_desconto = new SemDesconto(this);
	}

	~Cliente() { delete _desconto; }

	int n_cliente() { return _n_cliente; }
	std::string nome() { return _nome; }
	int contacto() { return _contacto; }
	int data_nascimento() { return _data_nascimento; }
	int compras_efectuadas() { return _compras_efectuadas; }
	double desconto() { return _desconto->get_desconto(); }

	void set_desconto(Desconto* desconto) {
		_desconto = desconto;
	}

	void efetua_compra() {
		_compras_efectuadas++;
		_desconto->atualiza();
	}

	bool operator==(const Cliente &other) const {
		return _n_cliente == other._n_cliente;
	}

	friend std::ostream &operator<<(std::ostream& os, Cliente &cliente) {
		os << cliente._n_cliente << ": " << cliente._nome
				<< ", " << cliente._contacto << std::endl;
		return os; 
	}
};
 #endif