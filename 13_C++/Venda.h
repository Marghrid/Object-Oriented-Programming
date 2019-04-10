/** FILE: Venda.h   **   Margarida Ferreira   **   80832  **/
#ifndef __VENDA__
#define __VENDA__

enum TipoDeProduto { tipo1, tipo2, tipo3 };

enum ModoPagamento {
	dinheiro,
	cartao_de_debito,
	cartao_de_credito_bancario,
	cartao_de_compras_da_loja
};

class Venda {
private:
	int _data;
	double _valor;
	TipoDeProduto _tipo;
	ModoPagamento _modo_de_pagamento;

public:
	Venda(int data, double valor,
		TipoDeProduto tipo,
		ModoPagamento modo_de_pagamento) {
		_data = data;
		_valor = valor;
		_tipo = tipo;
		_modo_de_pagamento = modo_de_pagamento;
	}

	friend std::ostream& operator<<(std::ostream& os, Venda& venda) {
		os << "Data da compra: " << venda._data << std::endl;
		os << "Valor da compra: " << venda._valor << std::endl;
		os << "Modo de pagamento: " << venda._modo_de_pagamento << std::endl;
		os << "Produto: " << venda._tipo << std::endl;
		return os;
	}
};
#endif