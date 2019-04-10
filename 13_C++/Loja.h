/** FILE: Loja.h   **   Margarida Ferreira   **   80832 **/
#ifndef __LOJA__
#define __LOJA__

#include "Cliente.h"
#include "Venda.h"
#include "Selecionador.h"
#include <algorithm>
#include <vector>
#include <map>

class Loja {
private:
	std::vector<Cliente*> _clientes;
	std::vector<Venda> _vendas;
public:
	~Loja() {
		std::vector<Cliente*>::iterator it;
		for (it = _clientes.begin(); it != _clientes.end(); ++it)
    		delete *it;
	}

	void vende(int n_cliente, int data_hoje, double valor,
			TipoDeProduto tipo, ModoPagamento modo) {

		if(n_cliente >= _clientes.size()) {
			std::cout << "Número de cliente inválido!" << std::endl;
			return;
		}

		std::vector<Cliente*>::iterator it;
		for(it = _clientes.begin(); it != _clientes.end(); it++) {
			if((*it)->n_cliente() == n_cliente)
				break;
		}

		(*it)->efetua_compra();

		Venda venda(data_hoje, valor, tipo, modo);
		_vendas.push_back(venda);

		std::cout << "Venda efectuada:" << std::endl;
		std::cout << venda << std::endl;
	}

	void novo_cliente(std::string nome, int contacto,
		int data_nascimento, int data_hoje) {
		
		int n_cliente = _clientes.size();
		Cliente* cliente =
			new Cliente(nome, n_cliente, contacto, data_nascimento, data_hoje);
		_clientes.push_back(cliente);

		std::cout << "Cliente adicionado:" << std::endl;
		std::cout << *cliente << std::endl;
	}

	int get_n_cliente(std::string nome_cliente) {
		std::vector<Cliente*>::iterator it;
		for(it = _clientes.begin(); it != _clientes.end(); it++)
			if((*it)->nome() == nome_cliente)
				return (*it)->n_cliente();
		std::cout << "Não há nenhum cliente registado com o nome: "
					<< nome_cliente << std::endl;
		return -1;
	}

	int get_n_cliente(int contacto) {
		std::vector<Cliente*>::iterator it;
		for(it = _clientes.begin(); it != _clientes.end(); it++)
			if((*it)->contacto() == contacto)
				return (*it)->n_cliente();
		std::cout << "Não há nenhum cliente registado com o contacto: "
					<< contacto << std::endl;
		return -1;
	}

	std::vector<Cliente*> lista(Selecionador &sel) {
		std::vector<Cliente*> selecionados = sel.seleciona(_clientes);
		std::vector<Cliente*>::iterator it;
		for(it = selecionados.begin(); it != selecionados.end(); it++)
			std::cout << **it << std::endl;
		return selecionados;
	}
};
#endif