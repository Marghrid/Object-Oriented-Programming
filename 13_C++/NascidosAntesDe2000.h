/** FILE: NascidosAntesDe2000.h   **   Margarida Ferreira   **   80832 **/
#ifndef __NASCIDOSANTESDE2000__
#define __NASCIDOSANTESDE2000__

#include "Selecionador.h"
#include <vector>

/* Exemplo de um selecionador. Devolve apenas *
 * os clientes que nasceram antes do ano 2000 */
class NascidosAntesDe2000 : public Selecionador {
public:
	std::vector<Cliente*> seleciona(std::vector<Cliente*> &todos) override {
		std::vector<Cliente*> selecionados;
		std::vector<Cliente*>::iterator it;
		for(it = todos.begin() ; it != todos.end(); ++it)
			if((*it)->data_nascimento() <= 20000101)
				selecionados.push_back(*it);
		return selecionados;
	}
};
#endif