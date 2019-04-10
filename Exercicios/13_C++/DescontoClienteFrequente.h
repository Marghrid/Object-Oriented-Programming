/** FILE: DescontoClienteFrequente.h   **   Margarida Ferreira   **   80832  **/
#ifndef __DESCONTOCLIENTEFREQUENTE__
#define __DESCONTOCLIENTEFREQUENTE__

#include "Desconto.h"

class DescontoClienteFrequente : public  Desconto {
public:
	DescontoClienteFrequente(Cliente *cliente) : Desconto(cliente) {}
	
	double get_desconto() const override { return 0.85; }
	void atualiza() override {}
};
#endif