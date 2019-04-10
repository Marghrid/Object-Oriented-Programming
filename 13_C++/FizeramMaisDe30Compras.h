/** FILE: FizeramMaisDe30Compras.h   **   Margarida Ferreira   **   80832 **/
#ifndef __FIZERAMMAISDE100COMPRAS__
#define __FIZERAMMAISDE100COMPRAS__

#include "Selecionador.h"
#include <vector>
/* Exemplo de um selecionador. Devolve apenas os clientes *
 * que já efectuaram mais de 30 compras na loja.          */
class FizeramMaisDe30Compras : public Selecionador {
public:
	std::vector<Cliente*> seleciona(std::vector<Cliente*> &todos) override {
		std::vector<Cliente*> selecionados;
		std::vector<Cliente*>::iterator it;
		for(it = todos.begin() ; it != todos.end(); ++it)
			if((*it)->compras_efectuadas() >= 30)
				selecionados.push_back(*it);
		return selecionados;
	}
};
#endif