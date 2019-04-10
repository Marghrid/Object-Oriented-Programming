/** FILE: Selecionador.h   **   Margarida Ferreira   **   80832 **/
#ifndef __SELECIONADOR__
#define __SELECIONADOR__

#include <vector>

/* Responsável por selecionar clientes de acordo com diferentes critérios. */
class Selecionador {
public:
	virtual ~Selecionador() {}
	
	virtual std::vector<Cliente*> seleciona(std::vector<Cliente*> &todos) = 0;
};
#endif