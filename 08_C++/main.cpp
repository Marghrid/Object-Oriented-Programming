#include "Cat.h"
#include <iostream>
#include <sstream>

int main() {
//  (1) cria dois gatos (“Tareco” com 2 anos e “Pantufa” com 6 meses);
	Cat tareco = Cat("Tareco", 2);
	Cat pantufa = Cat("Pantufa", 0.5);

//  (2) escreve os gatos para um std::stringstream;
	std::stringstream s;
	s << tareco << ' ' << pantufa;

//  (3) cria dois gatos não inicializados;
	Cat c1;
	Cat c2;

//  (4) recupera os dois primeiros gatos do stream para os objectos
//    recém criados (que não estavam inicializados)
	s >> c1 >> c2;

//  (5) apresenta-os na saída (std::cout). 
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	return 0;
}