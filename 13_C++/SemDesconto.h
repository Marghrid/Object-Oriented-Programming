/** FILE: SemDesconto.h   **   Margarida Ferreira   **   80832  **/
#ifndef __SEMDESCONTO__
#define __SEMDESCONTO__
#include "Desconto.h"

class SemDesconto : public Desconto {
public:
	SemDesconto(Cliente *cliente) : Desconto(cliente) {}
	
	double get_desconto() const override { return 0; }
	void atualiza() override;
};
#endif