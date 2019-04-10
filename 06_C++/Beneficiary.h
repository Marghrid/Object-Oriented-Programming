// Beneficiary.h

#ifndef __BENEFICIARY__
#define __BENEFICIARY__

#include <vector>
#include <iostream>

class Beneficiary {
private:
	int _received_help = 0;
	std::vector<Beneficiary*> _subdivisions;

	/* Gere a distribuição da ajuda por cada uma das
	   subdivisões deste beneficiário             */
	void distribute(int help);

protected:
	Beneficiary() = default;
	// Impede que a classe seja instanciada.

	void add(Beneficiary* beneficiary) {
		_subdivisions.push_back(beneficiary);
	}

public:
	int received_help() const { return _received_help; }

	void receive_help(int help) {
		_received_help += help;
		if(help > 0)
			distribute(help);
	}
	
	int total_subdivisions_received_help() const;

	friend std::ostream &operator<<(std::ostream &os, Beneficiary &b) {
		os << " Received help:" << b.received_help();
		return os;
	}
};

#endif