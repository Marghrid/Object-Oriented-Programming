/** FILE: main.cpp   **   Margarida Ferreira   **   80832  **/
#include "Loja.h"
#include "Selecionador.h"
#include "NascidosAntesDe2000.h"
#include "FizeramMaisDe30Compras.h"

int main() {
	
	Loja l;
	l.novo_cliente("Jean", 12345, 19901212, 20161220);
	l.novo_cliente("Luc", 54321, 20010403, 20161220);
	l.novo_cliente("Tiberius", 55544, 19571111, 20161221);
	l.novo_cliente("Blargh", 90909, 19871230, 20161221);
	l.vende(0, 20161220, 21.67, tipo1, dinheiro);
	l.vende(l.get_n_cliente("Jean"), 20161221, 3.45, tipo2, cartao_de_debito);
	l.vende(l.get_n_cliente("Luc"), 20161220, 3.45, tipo2, cartao_de_debito);
	l.vende(l.get_n_cliente("Tiberius"), 20161221, 3.45, tipo3, cartao_de_debito);
	l.vende(l.get_n_cliente(90909), 20161221, 3.45, tipo3, cartao_de_debito);

	for (int i = 0; i < 40; i++)
		l.vende(l.get_n_cliente("Jean"), 20161222, 3.45, tipo2, cartao_de_debito);

	std::cout << "Clientes que nasceram antes de 2000: " << std::endl;
	NascidosAntesDe2000 sel;
	l.lista(sel);

	std::cout << "Clientes que já efectuaram mais de 30 compras na loja: " << std::endl;
	FizeramMaisDe30Compras sel2;
	l.lista(sel2);

	return 0;
}