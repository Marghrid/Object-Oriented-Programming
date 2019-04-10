/** FILE: SemDesconto.cpp   **   Margarida Ferreira   **   80832  **/
#include "SemDesconto.h"
#include "Cliente.h"
#include "DescontoClienteFrequente.h"

void SemDesconto::atualiza() {
	if(_cliente->compras_efectuadas() > 99) {
		_cliente->set_desconto(new DescontoClienteFrequente(_cliente));
	}
}